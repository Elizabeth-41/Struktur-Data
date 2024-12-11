#include <iostream>
#include <conio.h>
using namespace std;

int n; // Variabel global untuk menyimpan jumlah elemen

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << "\n";
    cout << "1. Masukkan data" << "\n";
    cout << "2. Tampilkan data" << "\n";
    cout << "3. Sorting ASC" << "\n";
    cout << "4. Sorting DSC" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukkan angka: ";
}

void mPertama(string pesan) {
    system("cls");
    cout << "Halo, saya menu " << pesan;
    getch();
}

int main() {
    int data[100]; // Variabel lokal untuk menyimpan data array
    char pl;

    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                system("cls");
                cout << "Masukkan jumlah data: ";
                cin >> n;
                if (n > 100) {
                    cout << "Jumlah data tidak boleh lebih dari 100.\n";
                    n = 100;
                }
                for (int i = 0; i < n; i++) {
                    cout << "Masukkan elemen ke-" << i + 1 << ": ";
                    cin >> data[i];
                }
                cout << "Data berhasil dimasukkan.\n";
                getch();
                break;
            case '2':
                system("cls");
                cout << "Data yang dimasukkan: \n";
                for (int i = 0; i < n; i++) {
                    cout << data[i] << " ";
                }
                cout << "\nTekan tombol apa saja untuk kembali...";
                getch();
                break;
            case '3':
                system("cls");
                // Sorting ASC (Bubble Sort)
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (data[j] > data[j + 1]) {
                            tukar(&data[j], &data[j + 1]);
                        }
                    }
                }
                cout << "Data telah diurutkan secara ASC:\n";
                for (int i = 0; i < n; i++) {
                    cout << data[i] << " ";
                }
                cout << "\nTekan tombol apa saja untuk kembali...";
                getch();
                break;
            case '4':
                system("cls");
                // Sorting DSC (Bubble Sort)
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (data[j] < data[j + 1]) {
                            tukar(&data[j], &data[j + 1]);
                        }
                    }
                }
                cout << "Data telah diurutkan secara DSC:\n";
                for (int i = 0; i < n; i++) {
                    cout << data[i] << " ";
                }
                cout << "\nTekan tombol apa saja untuk kembali...";
                getch();
                break;
            case '5':
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia\nTekan tombol apa saja untuk melanjutkan...";
                getch();
                break;
        }
    } while (pl != '5');

    return 0;
}