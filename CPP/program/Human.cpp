#include "Human.hpp"

// default constructor
Human::Human()
{
    this->nik = "";
    this->nama = "";
    this->jenisKelamin = "";
}

// Parameterized constructor
Human::Human(string nik, string nama, string jenisKelamin)
{
    this->nik = nik;
    this->nama = nama;
    this->jenisKelamin = jenisKelamin;
}

// Setter and Getter
void Human::setNik(string nik)
{
    this->nik = nik;
}

string Human::getNik()
{
    return this->nik;
}

void Human::setNama(string nama)
{
    this->nama = nama;
}

string Human::getNama()
{
    return this->nama;
}

void Human::setJenisKelamin(string getJenisKelamin)
{
    this->jenisKelamin = getJenisKelamin;
}

string Human::getJenisKelamin()
{
    return this->jenisKelamin;
}

// Just in case testing the class attribute
void Human::introduce()
{
    cout << "Halo saya " + this->nama + " saya seorang " + this->jenisKelamin + ", saya mempunyai nomor induk kependukukan " + this->nik;
}

// Destrurtor, not used
Human::~Human()
{
}