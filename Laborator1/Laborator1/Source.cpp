#include <iostream>
using namespace std;

class Facultate {
public:
	Facultate()
	{
		cout << "Sunt in constructor default"<<endl;
	}

	Facultate(const string& numeParametru)
	{
		//numeParametru = "Istorie";
		//cout << &numeParametru <<endl;
		cout << "Sunt in constructor cu mai multi parametrii " << nume << endl;
		nume = numeParametru;
	}

	Facultate(const Facultate& other)
		: nume(other.nume)
	{
		//numeParametru = "Istorie";
		//cout << &numeParametru <<endl;
		cout << "Sunt in constructor de copiere "<<nume<<endl;
		//nume = numeParametru;
	}

	Facultate& operator=(const Facultate& other)
	{
		cout << "operator =" << endl;
		nume = other.nume;
		return *this;
	}

	~Facultate()
	{
		cout << "destructor Facultate"<<endl;
	}

	string getNume()
	{
		return nume;
	}

	friend ostream& operator<<(ostream& os, const Facultate& facultate);

private:
	string nume;
};

ostream& operator<<(ostream& os, const Facultate& facultate)
{
	os << "Facultatea selectata: " << facultate.nume <<endl;
	return os;
}

int main()
{
	string param = "FMI";
	//cout << param <<endl;
	//cout << &param <<endl;
	
	
	Facultate facultate1("Istorie");

	Facultate facultate2 = facultate1;

	cout << facultate2;
	//cout << param << endl;

	//cout<<endl<<facultate1.getNume();

	return 0;
}