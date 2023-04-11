#pragma once
using namespace std;
#include <iostream>

class Facultate
{
public:
	Facultate();
	Facultate(const string& numeFaculate, const string& altaLocatie);
	Facultate(const Facultate& altaFacultate);
	~Facultate();

	Facultate& operator=(const Facultate& altaFacultate);
	void setNume(string numeFaculate);
	string getNume();

	friend ostream& operator<<(ostream& os, const Facultate& altaFacultate);
private:

	string nume;
	string locatie;
};

//ostream& operator<<(ostream& os, const Facultate& altaFacultate)
//{
//	os << "Facultatea selectata este: " << altaFacultate.nume << " " << altaFacultate.locatie << endl;
//	return os;
//}