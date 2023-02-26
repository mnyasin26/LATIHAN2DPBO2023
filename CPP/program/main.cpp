#include "Utilities.hpp"

int main()
{
    vector<Mahasiswa> listMhs;

    // Labels for data display
    string label[] = {"NIK", "Nama", "Jenis Kelamin", "Fakultas", "Prodi", "Asal Universitas",
                      "Email Edu",
                      "NIM"};

    // Data dummy
    Mahasiswa ojan("10 50 24 170890 0001", "Fauzan", "Laki-laki",
                   "Universitas_Pendidikan_Indonesia", "ojan@upi.edu",
                   "2100137",
                   "FPMIPA",
                   "Ilmu Komputer");

    Mahasiswa maul("14 50 56 570890 0003", "maul", "Laki-laki",
                   "Institut_Teknologi_Bandung", "maul@itb.ac.id",
                   "1535481222",
                   "FPMIPA",
                   "Ilmu Komputer");

    Mahasiswa reyhan("12 60 34 140990 0004", "Reyhan", "Laki-laki",
                     "Telkom_University", "reyhan@telkom.edu",
                     "20213623",
                     "DPR",
                     "Digital_Public_Relation");

    // Push the object onto the listMhs
    listMhs.push_back(ojan);
    listMhs.push_back(maul);
    listMhs.push_back(reyhan);

    // Intantiate the Utilities class
    Utilities program(listMhs);

    program.displayData(label);
}