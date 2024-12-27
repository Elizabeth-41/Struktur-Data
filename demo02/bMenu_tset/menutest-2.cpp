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
// Fungsi untuk menampilkan semua data mahasiswa
void tampilkanSemuaData() {
    clearScreen();
    if (pos == -1) { // Jika tidak ada data
        cout << "Belum ada data yang dimasukkan.\n";
        return;
    }

    cout << "Data Mahasiswa:\n";
    cout << "------------------------------------\n";
    for (int i = 0; i <= pos; i++) {
        cout << "Data ke-" << i + 1 << ":\n";
        cout << "NIM     : " << sikc[i].nim << endl;
        cout << "Nama    : " << sikc[i].nama << endl;
        cout << "Alamat  : " << sikc[i].alamat << endl;
        cout << "IPK     : " << sikc[i].ipk << endl;
        cout << "------------------------------------\n";
    }
}
// Fungsi untuk memperbarui data mahasiswa berdasarkan indeks
void perbaruiData() {
    clearScreen();
    if (pos == -1) {
        cout << "Belum ada data yang dimasukkan.\n";
        return;
    }

    int index;
    cout << "Masukkan indeks data yang ingin diperbarui (1-" << pos + 1 << "): ";
    cin >> index;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input buffer

    if (index < 1 || index > pos + 1) {
        cout << "Indeks tidak valid.\n";
        return;
    }

    index--; // Penyesuaian indeks array

    cout << "Data lama:\n";
    cout << "NIM     : " << sikc[index].nim << endl;
    cout << "Nama    : " << sikc[index].nama << endl;
    cout << "Alamat  : " << sikc[index].alamat << endl;
    cout << "IPK     : " << sikc[index].ipk << endl;

    cout << "\nMasukkan data baru:\n";
    cout << "Masukan NIM: ";
    getline(cin, sikc[index].nim);
    cout << "Masukan Nama: ";
    getline(cin, sikc[index].nama);
    cout << "Masukan Alamat: ";
    getline(cin, sikc[index].alamat);
    cout << "Masukan IPK: ";
    cin >> sikc[index].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input buffer

    cout << "Data berhasil diperbarui!\n";
}

// Fungsi untuk menghapus data mahasiswa berdasarkan indeks
void hapusData() {
    clearScreen();
    if (pos == -1) {
        cout << "Belum ada data yang dimasukkan.\n";
        return;
    }

    int index;
    cout << "Masukkan indeks data yang ingin dihapus (1-" << pos + 1 << "): ";
    cin >> index;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan input buffer

    if (index < 1 || index > pos + 1) {
        cout << "Indeks tidak valid.\n";
        return;
    }

    index--; // Penyesuaian indeks array

    for (int i = index; i < pos; i++) {
        sikc[i] = sikc[i + 1];
    }

    pos--; // Kurangi jumlah data
    cout << "Data berhasil dihapus!\n";
}
