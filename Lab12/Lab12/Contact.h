#ifndef _CONTACT_H
#define _CONTACT_H


#include <string>
using namespace std;

class Contact {
  protected:
    string nume;


  public:
    inline Contact(string nume) : nume(nume){};

    virtual string getNume() = 0;

};
#endif
