#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setId();
    void printAll();

    static void setNim(int pnim) { nim = pnim; }
    static int getNim () { return nim; }

    mahasiswa(string pnama)
    {
        nama = pnama;
        setId();
    }
};

int mahasiswa::nim = 236;

void mahasiswa::setId()
{
    id = ++nim;
}
