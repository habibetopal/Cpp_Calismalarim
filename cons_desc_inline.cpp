#include <iostream>
#include <string>

using namespace std;

// --- Student Sınıf Yapısı ---
class Student {
private:
    // Üye değişkenler (Member variables) - Varsayılan olarak private'dır
    string studentName, studentSurname, studentID;

public:
    // Parametre almayan default constructor
    Student();

    // Parametre alan constructor
    Student(string name, string surname, string id);

    // Destructor (Yıkıcı fonksiyon)
    ~Student();

    // Copy constructor (Aynı sınıftan bir nesnenin kopyasını alır)
    Student(const Student& oth);

    // Üye fonksiyonlar (Member functions)
    void displayInformation();

    // Setter fonksiyonları (Private verilere değer atamak için)
    void setName(string name) { studentName = name; }
    void setSurname(string surname) { studentSurname = surname; }
    void setID(string id) { studentID = id; }

    void setInformation(string name, string surname, string id) {
        studentName = name;
        studentSurname = surname;
        studentID = id;
    }

    // Getter fonksiyonları (Private verileri okumak için)
    string getName() { return studentName; }
    string getSurname() { return studentSurname; }
    string getID() { return studentID; }
};

// --- Sınıf Fonksiyonlarının Gövdeleri ---

Student::Student() {
    cout << "Default constructor calisti." << endl;
    studentName = "None";
    studentSurname = "None";
    studentID = "None";
}

Student::Student(string name, string surname, string id) {
    cout << "Parametre alan constructor calisti." << endl;
    studentName = name;
    studentSurname = surname;
    studentID = id;
}

Student::~Student() {
    cout << "Destructor calisti." << endl;
}

Student::Student(const Student& oth) {
    cout << "Copy constructor calisti." << endl;
    studentName = oth.studentName;
    studentSurname = oth.studentSurname;
    studentID = oth.studentID;
}

inline void Student::displayInformation() {
    cout << "Name: " << studentName << " " << studentSurname << endl;
    cout << "ID: " << studentID << endl;
}

// --- Ana Program (Main) ---

int main() {
    // Farklı constructor yöntemleri ile nesne oluşturma
    Student student1("Oznur Sifa", "Akcam", "7896");
    Student student2; // Default constructor'ı çağırır
    Student student3(student1); // Copy constructor'ı çağırır

    cout << "\n--- Ogrenci Bilgileri ---" << endl;
    student1.displayInformation();
    student2.displayInformation();
    student3.displayInformation();

    /* // Setter ve Getter kullanımı örneği (Görseldeki yorum satırları):
    student1.setName("Asli");
    student1.setSurname("Dinc");
    student1.setID("5896");

    string name = student1.getName();
    cout << "\nAlinan isim: " << name << endl;
    */

    return 0;
}