#include "Human.hpp"

using namespace std;

class SivitasAkademik : public Human
{
protected:
    // protected attribute, for inheritance
    string asalUniversitas;
    string emailEdu;

public:
    // Default constructor
    SivitasAkademik();

    // Parameterized constructor
    SivitasAkademik(string nik, string nama, string jenisKelamin, string asalUniversitas, string emailEdu);

    // Setter and Getter
    void setAsalUniversitas(string asalUniversitas);
    string getAsalUniversitas();
    void setEmailEdu(string emailEdu);
    string getEmailEdu();

    //  Just in case testing the class attribute
    void introduce();

    ~SivitasAkademik();
};
