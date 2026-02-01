#pragma once
#include <iostream>
#include <string>
#include "Ogretmen.h"

using namespace std;

class Etut {
    Ogretmen ogrt;
    string tarihSaat;
    int dersSaati, derslikNo, dersUcreti;

public:
    Etut(string isim, string brans, int ucret,
        string tarihS, int dersS, int derslikN);

    int ucretHesapla();
    void ekranaYaz();
};

inline Etut::Etut(string isim, string brans, int ucret,
    string tarihS, int dersS, int derslikN)
    : ogrt(isim, brans, ucret)
{
    tarihSaat = tarihS;
    dersSaati = dersS;
    derslikNo = derslikN;
    dersUcreti = ucretHesapla();
}

inline int Etut::ucretHesapla() {
    return ogrt.saatlikUcret * dersSaati;
}

inline void Etut::ekranaYaz() {
    ogrt.ekranaYaz();
    cout << "Etut Bilgileri:" << endl
        << tarihSaat << endl
        << dersSaati << endl
        << derslikNo << endl
        << dersUcreti << endl;
}
