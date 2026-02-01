#pragma once
#include <iostream>
#include <string>
#include "Etut.h"
using namespace std;

class Ogrenci
{
    string adSoyad;
    Etut etutBilgileri;

public:
    Ogrenci(string ad, string isim, string brans, int ucret, string tarihS, int dersS, int derslikN);
    inline void ekranaYaz();
};

// Kurucu Fonksiyon (Constructor) - Baþlatma Listesi ile
Ogrenci::Ogrenci(string ad, string isim, string brans, int ucret, string tarihS, int dersS, int derslikN)
    : etutBilgileri(isim, brans, ucret, tarihS, dersS, derslikN)
{
    adSoyad = ad;
    // this->adSoyad = ad; // Alternatif kullaným
}

// Bilgileri Ekrana Yazdýran Fonksiyon
inline void Ogrenci::ekranaYaz() {
    cout << "Ogrenci Bilgileri: " << endl << adSoyad << endl;
    etutBilgileri.ekranaYaz();
}
