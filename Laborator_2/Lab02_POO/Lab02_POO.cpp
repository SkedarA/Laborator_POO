#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Persoana {
    unsigned vs;
    char nume[20];
    char prenume[20];
};

class Pers {
private:
    unsigned vs;
    char nume[20];
    char prenume[20];

public:
    Pers(unsigned vs1, char* num1, char* prenum1="") {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers(){}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }
    char* arata_prenume() { return this->prenume; }
};

int main()
{

    unsigned int a1 = 0;
    a1 = 17;
    Persoana p1;
    p1.vs = 17;
    strcpy_s(p1.nume, 4, "Ion");

    strcpy_s(p1.prenume, 7, "George");

    Console::WriteLine("Afisam un mesaj folosind comenzile specifice Visual C++/ CLI");

    cout << p1.nume << "\t" << p1.prenume << "\t" << p1.vs << endl;


    Console::WriteLine("Utilizam clasa Pers.");
    Pers p2(20, "Ionescu", "George");

    Pers* p3 = new Pers(21, "Popescu", "Alina");

    cout << p2.arata_nume() << "\t" << p2.arata_vs() << endl;
    cout << p3->arata_nume() << "\t" << p3->arata_vs() << endl;

    unsigned int nrPers;

    cout << "Introduceti nr de persoane" << endl;
    cin >> nrPers;

    Persoana* persoane = new Persoana[nrPers];

    for (int i = 0; i < nrPers; i++) {
        cout << "Introceti varsta persoana " << i+1 << ": " << endl;
        cin >> persoane[i].vs;

        cout << "Introduceti numele " << i+1 << ": " << endl;
        cin >> persoane[i].nume;

        cout << "Introduceti prenumele " << i+1 << ": " << endl;
        cin >> persoane[i].prenume;
    }


    for (int i = 0; i < nrPers; i++) {
        cout << "Pers (" << i+1 << "): " << persoane[i].nume << "\t" << persoane[i].prenume << "\t" << persoane[i].vs << endl;
    }

    Console::ReadKey();




    return 0;
}
