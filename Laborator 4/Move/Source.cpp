#include <iostream>
#include <vector>

class String
{
public:
	String() = default;//delete
	String(const char* string)
	{
		std::cout << "Created" << std::endl;
		m_Size = strlen(string);
		m_Data = new char[m_Size];
		memcpy(m_Data, string, m_Size);
	}

	String(const String& other)
	{
		std::cout << "Copied" << std::endl;
		m_Size = other.m_Size;
		m_Data = new char[m_Size];
		memcpy(m_Data, other.m_Data, m_Size);
	}

	String(String&& other) noexcept
	{
		std::cout << "Moved" << std::endl;
		m_Size = other.m_Size;
		m_Data = other.m_Data;

		other.m_Size = 0;
		other.m_Data = nullptr;//comenteaza asta
	}

	~String()
	{
		std::cout << "Destroyed" << std::endl;
		delete m_Data;
	}

	void Print()
	{
		for (uint32_t i = 0; i < m_Size; i++)
			std::cout << m_Data[i];
		std::cout << std::endl;
	}
private:
	char* m_Data;
	uint32_t m_Size;
};

class Entity
{
public:
	Entity(const String& name)
		:m_Name(name)
	{}

	Entity(String&& name)
		:m_Name(std::move(name))
	{}

	void PrintName()
	{
		m_Name.Print();
	}
protected:
	String m_Name;
};

void foo(int&& a)
{
	;
}

int main()
{
	//auto a = String("Daniel");
	//Entity entity(a);
	Entity entity("Daniel");
	entity.PrintName();


	//int b;
	//foo(b);       //Error. An rValue reference cannot be pointed to a lValue.
	//foo(5);       //Compiles with no error.
	//foo(b + 3);     //Compiles with no error.
	//int&& c = b;  //Error. An rValue reference cannot be pointed to a lValue.
	//int&& d = 5;  //Compiles with no error.
}