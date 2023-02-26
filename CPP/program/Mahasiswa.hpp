#include "SivitasAkademik.hpp"

using namespace std;

class Mahasiswa : public SivitasAkademik
{
protected:
    // protected attribute, for inheritance
    string nim;
    string fakultas;
    string prodi;

public:
    // Default constructor
    Mahasiswa();

    // Parameterized constructor
    Mahasiswa(string nik, string nama, string jenisKelamin, string asalUniversitas, string emailEdu, string nim, string fakultas, string prodi);

    // Setter and Getter
    void setNim(string nim);
    string getNim();
    void setFakultas(string fakultas);
    string getFakultas();
    void setProdi(string prodi);
    string getProdi();

    // retrive all Attributes
    string *getAllAttributes();

    //  Just in case testing the class attribute
    void introduce();

    ~Mahasiswa();
};
