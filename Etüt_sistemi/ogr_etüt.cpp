#include <iostream>
#include "Ogrenci.h"

using namespace std;

int main() {

    Ogrenci ogr("Ayşe Yılmaz", "Ali Yucel", "Fizik", 500, "31.10.2024 16:00", 2, 202);

    ogr.ekranaYaz();
    return 0;

}