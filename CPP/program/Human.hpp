#include <iostream>
#include <string>

using namespace std;

class Human
{
protected:
    // Attribut protected, untuk diwariskan
    string nik;
    string nama;
    string jenisKelamin;

public:
    // Default constructor
    Human();
    // Parameterized constructor
    Human(string nik, string nama, string jenisKelamin);

    // Setter and Getter
    void setNik(string nik);
    string getNik();
    void setNama(string nama);
    string getNama();
    void setJenisKelamin(string jenisKelamin);
    string getJenisKelamin();

    //  Just in case testing the class attribute
    void introduce();

    ~Human();
};
