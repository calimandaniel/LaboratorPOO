#pragma once
#include <iostream>
using namespace std;

class Facultate {
public:
	Facultate();
	Facultate(const string& numeParametru);
	Facultate(const Facultate& other);

	Facultate& operator=(const Facultate& other);

	~Facultate();

	void setNume(const string& other);

	string getNume() const;

	//friend ostream& operator<<(ostream& os, const Facultate& facultate);

private:
	string nume;
};

//ostream& operator<<(ostream& os, const Facultate& facultate)
//{
//	os << "Facultatea selectata: " << facultate.nume << endl;
//	return os;
//}