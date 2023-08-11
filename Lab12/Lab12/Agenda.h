#ifndef _AGENDA_H
#define _AGENDA_H


#include <vector>
using namespace std;
#include <string>

class Contact;
class Prieten;

class Agenda {
  private:
    vector<Contact*> contacte;


  public:
    bool find_by_name(string nume);

    vector<Prieten*> prieteni();

    bool delete_contact(string nume);

    void add_contact(Contact * contact);

};
#endif
