#include <iostream>
#include <string>

//class Entity
//{
//public:
//	virtual std::string GetName()
//	{
//		return "Entity";
//	}
//};
//
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name)
//		: m_Name(name)
//	{}
//	std::string GetName() override 
//	{
//		return m_Name;
//	}
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//
//int main()
//{
//	Entity* e = new Entity();
//	//std::cout << e->GetName() << std::endl;
//	PrintName(e);
//	Player* p = new Player("Daniel");
//	//std::cout << p->GetName() << std::endl;
//	PrintName(p);
//	Entity* entity = p; // 1
//	//std::cout << entity->GetName() << std::endl;
//	PrintName(entity);
//}

class curs_nv1 {};

class curs_nv2 {
public:
	void f() {}
};

class curs_v1 {
public:
	virtual void f() {}
};

class curs_v2 {
public:
	virtual void f() {}
	virtual void g() {}
};

int main() {
	std::cout << "sizeof(curs_nv1): " << sizeof(curs_nv1) << "\n";
	std::cout << "sizeof(curs_nv2): " << sizeof(curs_nv2) << "\n";
	std::cout << "sizeof(curs_v1): " << sizeof(curs_v1) << "\n";
	std::cout << "sizeof(curs_v2): " << sizeof(curs_v2) << "\n";
}