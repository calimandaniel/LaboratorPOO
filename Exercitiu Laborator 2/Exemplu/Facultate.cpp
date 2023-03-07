#include "Facultate.h"

Facultate::Facultate()
{
	cout << "Sunt in constructorul default" << endl;
}

Facultate::Facultate(const string& numeParametru)
	: nume(numeParametru)
{
	cout << "Sunt in constructorul cu paramterul" << endl;
}

string Facultate::getNume() const
{
	return nume;
}