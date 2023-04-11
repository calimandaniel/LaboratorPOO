#include "Facultate.h"

Facultate::Facultate()
{
	cout << "Constructor default";
}

Facultate::Facultate(const string& numeFaculate, const string& altaLocatie)
{
	cout << "Constructor cu parametrii" << endl;
	nume = numeFaculate;
	locatie = altaLocatie;
}

Facultate::Facultate(const Facultate& altaFacultate)
{
	nume = altaFacultate.nume;
	cout << "Constructor de copiere" << endl;
}

Facultate::~Facultate()
{
	cout << "Destructor" << endl;
}

Facultate& Facultate::operator=(const Facultate& altaFacultate)
{
	cout << "Supraincarcare operator=" << endl;
	nume = altaFacultate.nume;
	return *this;
}

void Facultate::setNume(string numeFaculate)
{
	nume = numeFaculate;
}

string Facultate::getNume()
{
	return nume;
}
