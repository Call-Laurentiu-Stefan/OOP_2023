
#include "Prieten.h"

Prieten::Prieten(string nume, string dn, string tel, string adr): 
	Contact(nume), data_nastere(dn), nr_telefon(tel), adresa(adr)
{

}

string Prieten::getNume() {

	return nume;
}

