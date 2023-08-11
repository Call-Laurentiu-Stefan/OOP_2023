#ifndef _PRIETEN_H
#define _PRIETEN_H


#include "Contact.h"
#include <string>
using namespace std;

class Prieten : public Contact {
  private:
    string data_nastere;

    string nr_telefon;

    string adresa;


  public:
    Prieten(string nume, string dn, string tel, string adr);

    virtual string getNume();

};
#endif
