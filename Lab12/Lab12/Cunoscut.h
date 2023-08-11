#ifndef _CUNOSCUT_H
#define _CUNOSCUT_H


#include "Contact.h"
#include <string>
using namespace std;

class Cunoscut : public Contact {
  private:
    string nr_telefon;


  public:
    Cunoscut(string nume, string tel);

    virtual string getNume();

};
#endif
