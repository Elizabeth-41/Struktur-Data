#include <iostream>
#include <conio.h>
using namespace std;

int data[100]; // Array untuk menyimpan data
int n = 0;     // Jumlah data

void dMenu() {
    system("cls");
    cout << "Aplikasi Tampilan Menu" << endl;
    cout << "1. Masukkan Data" << endl;
    cout << "2. Tampilkan Data" << endl;
    cout << "3. Exit" << endl;
    cout << "Masukkan angka: ";
}

int main() {
    char pilihan;

    do {
        dMenu();
        pilihan = getch();

        switch (pilihan) {
            case '1':
                system("cls");
                cout << "Masukkan jumlah data: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Masukkan data ke-" << i + 1 << ": ";
                    cin >> data[i];
                }
                cout << "Data berhasil disimpan." << endl;
                getch();
                break;
            case '2':
                system("cls");
                cout << "Data yang Anda masukkan:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << data[i] << " ";
                }
                cout << endl;
                getch();
                break;
            case '3':
                cout << "Keluar dari aplikasi." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                getch();
                break;
        }
    } while (pilihan != '3');

    return 0;
}
