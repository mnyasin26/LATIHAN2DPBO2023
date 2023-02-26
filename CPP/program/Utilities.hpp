#include <iostream>
#include <string>
#include <vector>
#include "Mahasiswa.hpp"

using namespace std;

class Utilities
{
private:
    vector<Mahasiswa> listMhs;
public:
    Utilities(vector<Mahasiswa> source);

    void displayData(string label[]);

    ~Utilities();
};
