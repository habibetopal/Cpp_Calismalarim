#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ogretmen
{
    string isimSoyisim, brans;
    int saatlikUcret;

public:
    Ogretmen(string, string, int);
    ~Ogretmen();
    void ekranaYaz();
    friend class Etut;
};

Ogretmen::Ogretmen(string isim, string brans, int ucret) {
    isimSoyisim = isim;
    this->brans = brans;
    saatlikUcret = ucret;
}

Ogretmen::~Ogretmen() {}

void Ogretmen::ekranaYaz() {
    cout << "Ogretmen Bilgileri: " << endl << isimSoyisim << endl << brans << endl << saatlikUcret << endl;
}