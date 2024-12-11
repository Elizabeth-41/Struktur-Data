#include <iostream>
#include <conio.h> // Untuk fungsi getch()
using namespace std;

void dMenu() {
    system("cls"); // Membersihkan layar
    cout << "Aplikasi Tampilan Menu" << endl;
    cout << "1. Menu Pertama" << endl;
    cout << "2. Menu Kedua" << endl;
    cout << "3. Menu Ketiga" << endl;
    cout << "4. Menu Keempat" << endl;
    cout << "5. Exit" << endl;
    cout << "Masukkan angka: ";
}

int main() {
    char pilihan;
    do {
        dMenu();
        pilihan = getch(); // Membaca input user tanpa menekan Enter

        switch (pilihan) {
            case '1':
                cout << "Anda memilih Menu Pertama." << endl;
                getch(); // Menunggu user menekan tombol
                break;
            case '2':
                cout << "Anda memilih Menu Kedua." << endl;
                getch();
                break;
            case '3':
                cout << "Anda memilih Menu Ketiga." << endl;
                getch();
                break;
            case '4':
                cout << "Anda memilih Menu Keempat." << endl;
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
    } while (pilihan != '5'); // Keluar jika memilih opsi 5

    return 0;
}
