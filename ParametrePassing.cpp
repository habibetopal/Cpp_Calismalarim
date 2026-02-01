#include <iostream>
using namespace std;

int topla1(int x, int y)    // Call by value
{
    //x = 1;
    return x + y;
}

int topla2(int& x, int& y)  // Call by reference
{
    //x=1;
    return x + y;
}

int topla3(int* x, int* y)  // Call by address (reference with pointer)
{
    *x = 2;
    return *x + *y;
}

int main()
{
    int a = 5;
    int b = 3;

    int sonuc1 = topla1(a, b);  // Pass by value

    //cout << " Call by value sonuc1: " << sonuc1 << endl;
    //cout << " Call by value fonksiyonundan sonra a'nin degeri: " << a << endl;

    int sonuc2 = topla2(a, b);  // Pass by reference
    //cout << " Call by reference sonuc2: " << sonuc2 << endl;
    //cout << " Call by reference fonksiyonundan sonra a'nin degeri: " << a << endl;

    int sonuc3 = topla3(&a, &b); // Pass by address (reference with pointer)

    // int* x = &a;
    // int &x = a;

    //cout << " Call by address (reference with pointer) sonuc3: " << sonuc3 << endl;
    //cout << " Call by address fonksiyonundan sonra a'nin degeri: " << a << endl;

    return 0;
}