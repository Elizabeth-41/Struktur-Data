#include <iostream>
#include <conio.h>
using namespace std;

int data[100]; // Array untuk menyimpan data
int n = 0;     // Jumlah data

// Fungsi untuk menukar elemen
template<typename T>
void tukar(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk sorting ASC
void sortingASC() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tukar(data[j], data[j + 1]);
            }
        }
    }
}

// Fungsi untuk sorting DSC
void sortingDSC() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                tukar(data[j], data[j + 1]);
            }
        }
    }
}

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << endl;
    cout << "1. Masukkan Data" << endl;
    cout << "2. Tampilkan Data" << endl;
    cout << "3. Sorting ASC" << endl;
    cout << "4. Sorting DSC" << endl;
    cout << "5. Exit" << endl;
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
                system("cls");
                sortingASC();
                cout << "Data telah diurutkan secara ASC:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << data[i] << " ";
                }
                cout << endl;
                getch();
                break;
            case '4':
                system("cls");
                sortingDSC();
                cout << "Data telah diurutkan secara DSC:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << data[i] << " ";
                }
                cout << endl;
                getch();
                break;
            case '5':
                cout << "Keluar dari aplikasi." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                getch();
                break;
        }
    } while (pilihan != '5');

    return 0;
}
