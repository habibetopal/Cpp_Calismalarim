#include <iostream>
#include <string>
#include <limits> // numeric_limits için gerekli

using namespace std;

// Öğrenci bilgilerini tutan yapı
struct Ogrenci
{
    long ogrNo;
    string adSoyad;
    int vizeNotu;
    int finalNotu;
    char gecmeNotu;
};

// Vize ve final notuna göre ortalamayı hesaplayan fonksiyon
int gecmeNotuHesapla(Ogrenci& ogr)
{
    return (ogr.vizeNotu * 0.4) + (ogr.finalNotu * 0.6);
}

// Ortalamaya göre harf notunu belirleyen fonksiyon
char harfNotuHesapla(Ogrenci& ogr)
{
    int n = gecmeNotuHesapla(ogr);

    if ((n >= 0) && (n <= 40)) {
        ogr.gecmeNotu = 'F';
    }
    else if ((n > 40) && (n <= 60)) {
        ogr.gecmeNotu = 'D';
    }
    else if ((n > 60) && (n <= 70)) {
        ogr.gecmeNotu = 'C';
    }
    else if ((n > 70) && (n <= 85)) {
        ogr.gecmeNotu = 'B';
    }
    else {
        ogr.gecmeNotu = 'A';
    }

    return ogr.gecmeNotu;
}

// Öğrenci bilgilerini ekrana yazdıran fonksiyon
void ekranaYaz(Ogrenci& ogr) {
    cout << ogr.ogrNo << " " << ogr.adSoyad << " " << harfNotuHesapla(ogr) << endl;
}

// Kullanıcıdan öğrenci bilgilerini alan fonksiyon
void bilgiAl(Ogrenci& ogr) {
    cout << "Ogrenci bilgilerini giriniz:" << endl;

    cout << "\nOgrenci numarasi: ";
    cin >> ogr.ogrNo;

    cout << "\nAd-Soyad: ";
    // cin'den sonra getline kullanırken aradaki '\n' karakterini temizlemek için:
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, ogr.adSoyad);

    cout << "\nVize Notu: ";
    cin >> ogr.vizeNotu;

    cout << "\nFinal Notu: ";
    cin >> ogr.finalNotu;
    cout << endl;
}

int main()
{
    struct Ogrenci ogr;

    bilgiAl(ogr);
    ekranaYaz(ogr);

    return 0;
}