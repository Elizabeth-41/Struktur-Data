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

// Fungsi untuk membersihkan layar (cross-platform)
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Fungsi untuk memasukkan satu data mahasiswa
void masukanData() {
    if (pos >= 29) { // Membatasi jumlah maksimal data
        cout << "Data penuh! Tidak bisa menambahkan data baru.\n";
        return;
    }
    pos++;
    clearScreen();
    cout << "Masukan NIM: ";
    getline(cin, sikc[pos].nim);
    cout << "Masukan Nama: ";
    getline(cin, sikc[pos].nama);
    cout << "Masukan Alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "Masukan IPK: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input buffer
    cout << "Data berhasil ditambahkan!\n";
}
