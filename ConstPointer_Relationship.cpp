#include <iostream>
using namespace std;

/* Const - Pointer İlişkisi */
// const int* x = const data + nonconst pointer
// pointerın işaret ettiği değişken değişir, işaret ettiği değişken değişkenin değeri değişemez

int topla1(const int* x, const int* y)
{
    {
        //*x = 100;     // izin yok
        //int z = 3;
        //x = &z;       // izin var
        return *x + *y;
    }
}

//int* const x = nonconst data + const pointer
// pointerın işaret ettiği değişken değişemez (hep aynı değişkenin adresine sabit),
// işaret ettiği değişken değişkenin değeri değişir

int topla2(int* const x, int* const y)
{
    {
        //*x = 100; // izin var
        //int z = 3;
        //x = &z;     // izin yok
        return *x + *y;
    }
}

// const int* const x = const data + const pointer
// pointerın işaret ettiği değişken ve değeri değişemez
// (hep aynı değişkenin hem adresine hem değerine sabit)

int topla3(const int* const x, const int* const y)
{
    {
        //*x = 100; // izin yok
        //int z = 3;
        //x = &z;   // izin yok
        return *x + *y;
    }
}
/* Const - Reference İlişkisi */
// const int& x = int& const x (ikisi aynı şey)
// const reference = const data + const pointer (topla3 ve topla4 fonksiyonu aynı şey)

int topla4(const int& x, int& const y) {
    //x = 100; // izin yok
    //Derleyici referans edilen değişkenin değerinin değişmesine izin vermez.
    //int z = 3;
    //x = z; // izin yok
    return x + y;
}
int main()
{
    int a = 5;
    int b = 3;

    int sonuc = topla1(&a, &b);
    cout << "Call by address (reference with ponter) sonuc: " << sonuc << endl;
    cout << "a: " << a << endl;

    //int sonuc = topla2(&a, &b);
    //cout << "Call by address (reference with ponter) sonuc: " << sonuc << endl;
    //cout << "a: " << a << endl;

    //int sonuc = topla3(&a, &b);
    //cout << "Call by address (reference with ponter) sonuc: " << sonuc << endl;
    //cout << "a: " << a << endl;

    //int sonuc = topla4(a, b);
    //cout << "Call by address (reference with ponter) sonuc: " << sonuc << endl;
    //cout << "a: " << a << endl;

    const int x = 5; // const data
    //int* p1 = &x; //geçersiz //nonconst data + nonconst pointer

    const int* p2 = &x; //geçerli //const data + nonconst pointer
    //int& r1 = x; //geçersiz! //nonconst data + const pointer

    const int& r2 = x; //geçerli //const data + const pointer

    return 0;
}