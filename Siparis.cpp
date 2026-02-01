#include <iostream>
#include <string>
using namespace std;

class Siparis;

class Musteri {
private:
    string ad;
    int musteriID;

protected:
    string telefon;

public:
    Musteri(string a, int id, string tel) : ad(a), musteriID(id), telefon(tel) {}
    ~Musteri() {}

    inline void bilgileriGoster() {
        cout << "Musteri: " << ad
            << " | ID: " << musteriID
            << " | Tel: " << telefon << endl;
    }

    friend class Siparis;
    friend void musteriGuncelle(Musteri& m, string yeniTel);
};

class Siparis {
private:
    int siparisNo;

protected:
    string urun;

public:
    float fiyat;

    Siparis(int no, string u, float f) : siparisNo(no), urun(u), fiyat(f) {}
    ~Siparis() {}

    void siparisBilgisiYaz();

    inline float kdvliFiyat() {
        return fiyat * 1.20;
    }
};

void Siparis::siparisBilgisiYaz() {
    cout << "Siparis No: " << siparisNo
        << " | Urun: " << urun
        << " | Fiyat: " << fiyat
        << " | KDV'li: " << kdvliFiyat() << endl;
}

void musteriGuncelle(Musteri& m, string yeniTel) {
    m.telefon = yeniTel;
}

void siralamaMesaji() {
    cout << "\n--- Siparis listesi olusturuluyor... ---\n";
}

int main() {
    Musteri m1("Ayse", 210, "0531 222 33 44");
    Musteri m2("Murat", 211, "0542 111 66 77");
    Musteri m3("Deniz", 212, "0550 888 99 00");

    Siparis s1(11, "Tablet", 7800);
    Siparis s2(12, "Akilli Bileklik", 1250);
    Siparis s3(13, "Webcam", 720);

    cout << "---- Musteri Bilgileri ----\n";
    m1.bilgileriGoster();
    m2.bilgileriGoster();
    m3.bilgileriGoster();

    cout << "\n---- Siparisler ----\n";
    s1.siparisBilgisiYaz();
    s2.siparisBilgisiYaz();
    s3.siparisBilgisiYaz();

    musteriGuncelle(m1, "0507 555 44 22");

    cout << "\nGuncel Musteri Bilgisi:\n";
    m1.bilgileriGoster();

    siralamaMesaji();

    return 0;
}