#include "Mahasiswa.hpp"

// Default constructor
Mahasiswa::Mahasiswa()
{
    this->nik = "";
    this->nama = "";
    this->jenisKelamin = "";
    this->asalUniversitas = "";
    this->emailEdu = "";
    this->nim = "";
    this->fakultas = "";
    this->prodi = "";
}

// Parameterized constructor
Mahasiswa::Mahasiswa(string nik, string nama, string jenisKelamin, string asalUniversitas, string emailEdu, string nim, string fakultas, string prodi)
{
    this->nik = nik;
    this->nama = nama;
    this->jenisKelamin = jenisKelamin;
    this->asalUniversitas = asalUniversitas;
    this->emailEdu = emailEdu;
    this->nim = nim;
    this->fakultas = fakultas;
    this->prodi = prodi;
}

// Setter and Getter
void Mahasiswa::setNim(string nim)
{
    this->nim = nim;
}

string Mahasiswa::getNim()
{
    return this->nim;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Mahasiswa::getFakultas()
{
    return this->fakultas;
}

void Mahasiswa::setProdi(string prodi)
{
    this->prodi = prodi;
}

string Mahasiswa::getProdi()
{
    return this->prodi;
}

string *Mahasiswa::getAllAttributes()
{
    // string *temp;
    // temp = (string *)malloc(sizeof(string));
    string value[8] = {this->nik,
                       this->nama,
                       this->jenisKelamin,
                       this->fakultas,
                       this->prodi,
                       this->asalUniversitas,
                       this->emailEdu,
                       this->nim};

    string *temp = value;

    for (int i = 0; i < 8; i++)
    {
        cout << temp[i] << "\n";
    }

    return temp;
}

// Just in case testing the class attribute
void Mahasiswa::introduce()
{
    cout << "Halo saya " + this->nama + " mahasiswa dari perguruan tinggi " + this->asalUniversitas + ", saya mengambil jurusan " + this->prodi + " yang berada di fakultas " + this->fakultas + ". NIM saya adalah " + this->nim;
}

// Destrurtor, not used
Mahasiswa::~Mahasiswa()
{
}