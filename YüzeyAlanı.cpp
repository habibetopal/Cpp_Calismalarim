#include <iostream>
using namespace std;

// Yüzey alanı hesaplayan fonksiyon
// length: call by value, width: call by reference, height: call by address
int yuzeyAlaniHesapla(int l, int& w, int* h)
{
    int alan = 2 * ((l * w) + (l * (*h)) + (w * (*h)));
    return alan;
}

int main()
{
    // Değerlerin tanımlanması
    int length = 5;    // Call by value (değer ile)
    int width = 4;     // Call by reference (referans ile)
    int height = 3;    // Call by address (adres/pointer ile)

    // Fonksiyonu çağırarak yüzey alanını hesaplıyoruz
    // Parametreleri istenen yöntemlere göre gönderiyoruz
    int yuzeyAlani = yuzeyAlaniHesapla(length, width, &height);

    // Sonuçları ekrana yazdır
    cout << "Uzunluk (length): " << length << endl;
    cout << "Genislik (width): " << width << endl;
    cout << "Yukseklik (height): " << height << endl;

    cout << "\nDikdortgenler prizmasinin yuzey alani: " << yuzeyAlani << endl;

    return 0;
}