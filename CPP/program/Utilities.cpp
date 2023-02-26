#include "Utilities.hpp"

// contructor definition
Utilities::Utilities(vector<Mahasiswa> source)
{
    this->listMhs = source;
}

// display in list format
void Utilities::displayData(string label[])
{
    int index = 1;

    for (auto &it : listMhs)
    {
        cout << "=== Data Mhs: " + to_string(index) + " ===\n";
        int index2 = 0;
        cout << label[index2++] + ": " + it.getNik() << "\n";
        cout << label[index2++] + ": " + it.getNama() << "\n";
        cout << label[index2++] + ": " + it.getJenisKelamin() << "\n";
        cout << label[index2++] + ": " + it.getFakultas() << "\n";
        cout << label[index2++] + ": " + it.getProdi() << "\n";
        cout << label[index2++] + ": " + it.getAsalUniversitas() << "\n";
        cout << label[index2++] + ": " + it.getEmailEdu() << "\n";
        cout << label[index2++] + ": " + it.getNim() << "\n";
        index++;
    }
}

Utilities::~Utilities()
{
}