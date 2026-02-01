#include <iostream>

using namespace std;

int main()
{
    int t = 13;

    int* i = &t;    // & adres operatörü

    /*cout << "t'nin degeri: " << t << "\n" << endl;
    cout << "t'nin adresi: " << &t << "\n" << endl;
    cout << "i'nin degeri: " << i << "\n" << endl;
    cout << "i'nin adresi: " << &i << "\n" << endl;*/

    cout << "--------------------------------------------------------\n" << endl;

    // * yönlendirme operatörü
    // işaretçi (pointer) üzerinden işaret edilen değişkene erişim sağlanır

    *i = 2024;

    cout << "t'nin degeri: " << t << "\n" << endl;
    cout << "t'nin adresi: " << &t << "\n" << endl;
    cout << "i'nin degeri: " << i << "\n" << endl;
    cout << "i'nin adresi: " << &i << "\n" << endl;
    cout << "i uzerinden erisilen deger: " << *i << "\n" << endl;

}