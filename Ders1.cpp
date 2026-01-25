#include<iostream>
using namespace std;
int main() {// hesap makinesi girilen 2 sayının
	int topla(int, int);
	int cikar(int, int);
	int carp(int, int);
	double bol(int, int);
	int sayi1;
	int sayi2;
	int secim;
	do {
		cout << "birinci sayı giriniz";
		cin >> sayi1;
		cout << "ikinci sayıyı giriniz";
		cin >> sayi2;
		cout << "toplama(1)/ cıkarma(2)/ carpma(3)/ bölme(4)";
		cin >> secim;

		if (secim == 1) {
			cout << topla(sayi1, sayi2);
		}
		if (secim == 2) {
			cout << cikar(sayi1, sayi2);
		}
		if (secim == 3) {
			cout << carp(sayi1, sayi2);
		}
		if (secim == 4) {
			cout << bol(sayi1, sayi2);
		}
	} while (true);
}

	int topla(int a, int b) {
		return a + b;
	}

	int cikar(int a, int b) {
		return a - b;
	}

	int carp(int a, int b) {
		return a * b;
	}

	double bol(int a, int b) {
		if (b == 0) {
			cout << "Hata: 0'a bolme yapilamaz!" << endl;
			return 0;
		}
		return 0;
	}
