#ifndef _COLEG_H
#define _COLEG_H


#include "Contact.h"
#include <string>
using namespace std;

class Coleg : public Contact {
  private:
    string nr_telefon;

    string firma;

    string adresa;


  public:
    Coleg(string nume, string tel, string firma, string adr);

    virtual string getNume();

};
#endif
