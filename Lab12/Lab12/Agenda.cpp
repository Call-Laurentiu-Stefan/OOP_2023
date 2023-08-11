
#include "Agenda.h"
#include "Contact.h"
#include "Prieten.h"
#include <iostream>
using namespace std;

bool Agenda::find_by_name(string nume) {

    for (auto i : contacte) {
        if (i->getNume() == nume) {
            cout << "Contact gasit!\n";
            return true;
        }
    }
    cout << "Contactul nu a fost gasit!\n";
    return false;
}

vector<Prieten*> Agenda::prieteni() {

    vector<Prieten*> rezultat;
    for (auto i : contacte) {
        Prieten* aux = dynamic_cast<Prieten*>(i);
        if (aux != nullptr) {
            rezultat.push_back(aux);
        }
    }
    return rezultat;
}

bool Agenda::delete_contact(string nume) {

    for (int i = 0; i < contacte.size(); i++) {
        if (contacte[i]->getNume() == nume) {
            cout << "Contactul cu numele " << contacte[i]->getNume() << " a fost sters!\n";
            contacte.erase(contacte.begin() + i);
            return true;
        }
    }
    cout << "Contactul cu numele " << nume << " nu a fost gasit!\n";
    return false;
}

void Agenda::add_contact(Contact* contact) {

    contacte.push_back(contact);
    cout << "Contactul a fost adaugat\n";
}

