#include <iostream>
#include <string>
#include <limits> // untuk numeric_limits
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

mahasiswa sikc[30]; // Array untuk menyimpan data mahasiswa
int pos = -1;       // Penunjuk posisi terakhir data
