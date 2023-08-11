#include"Agenda.h"
#include "Prieten.h"
#include "Cunoscut.h"
#include "Coleg.h"
#include <iostream>

int main()
{
    Prieten prieten1("Ion", "3/7/1995", "123456789", "Str. Adresa");
    Prieten prieten2("Maria", "23/05/2023", "01123581321", "Str. Secret");
    Cunoscut cunoscut1("Ana", "111222333");
    Coleg coleg1("Mihai", "444555666", "Alten", "Str. Companiei 1");

    Agenda agenda;

    // Adaugare contacte in agenda
    agenda.add_contact(&prieten1);
    agenda.add_contact(&prieten2);
    agenda.add_contact(&cunoscut1);
    agenda.add_contact(&coleg1);

    // Cautare contact dupa nume
    agenda.find_by_name("Ion");
    agenda.find_by_name("Marius");

    for (auto i : agenda.prieteni()) {
        cout<<i->getNume()<<" ";
    }
    cout << endl;

    // Stergere contact
    agenda.delete_contact("Maria");
    agenda.delete_contact("Cristi");

    for (auto i : agenda.prieteni()) {
        cout << i->getNume() << " ";
    }
}
