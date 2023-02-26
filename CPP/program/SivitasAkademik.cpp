#include "SivitasAkademik.hpp"

// Default constructor
SivitasAkademik::SivitasAkademik(){
    this->nik = "";
    this->nama = "";
    this->jenisKelamin = "";
    this->asalUniversitas = "";
    this->emailEdu = "";
}   

// Parameterized constructor
SivitasAkademik::SivitasAkademik(string nik, string nama, string jenisKelamin, string asalUniversitas, string emailEdu)
{
    this->nik = nik;
    this->nama = nama;
    this->jenisKelamin = jenisKelamin;
    this->asalUniversitas = asalUniversitas;
    this->emailEdu = emailEdu;
}

// Setter and Getter
void SivitasAkademik::setAsalUniversitas(string asalUniversitas)
{
    this->asalUniversitas = asalUniversitas;
}

string SivitasAkademik::getAsalUniversitas()
{
    return this->asalUniversitas;
}

void SivitasAkademik::setEmailEdu(string emailEdu)
{
    this->emailEdu = emailEdu;
}

string SivitasAkademik::getEmailEdu()
{
    return this->emailEdu;
}

// Just in case testing the class attribute
void SivitasAkademik::introduce()
{
    cout << "Halo saya " + this->nama + " saya seorang " + this->jenisKelamin + ", saya mempunyai nomor induk kependukukan " + this->nik;
}

// Destrurtor, not used
SivitasAkademik::~SivitasAkademik()
{
}