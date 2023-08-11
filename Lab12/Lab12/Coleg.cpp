
#include "Coleg.h"

Coleg::Coleg(string nume, string tel, string firma, string adr) :
    Contact(nume), nr_telefon(tel), firma(firma), adresa(adr)
{

}

string Coleg::getNume() {

    return nume;
}

