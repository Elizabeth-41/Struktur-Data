#include <iostream>
#include <string>
using namespace std;

// Fungsi tukar
void tukar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort (Ascending)
void bubble_sort_asc(int* data, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (*(data + j) < *(data + j - 1)) {
                tukar((data + j), (data + j - 1));
            }
        }
    }
}

// Bubble Sort (Descending)
void bubble_sort_desc(int* data, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (*(data + j) < *(data + j + 1)) {
                tukar((data + j), (data + j + 1));
            }
        }
    }
}

int main() {
    int* data = new int[100];
    int n;

    while (true) {
        cout << "Aplikasi Tampilan Menu\n";
        cout << "1. Menu Pertama\n";
        cout << "2. Menu Kedua\n";
        cout << "3. Menu Ketiga\n";
        cout << "4. Sorting Array\n";
        cout << "5. Exit\n";
        cout << "Masukkan pilihan: ";
        char pilihan;
        cin >> pilihan;

        if (pilihan == '4') {
            cout << "Masukkan jumlah elemen array: ";
            cin >> n;
            if (n <= 0) {
                cout << "Jumlah elemen harus lebih dari 0! Kembali ke menu utama...\n";
                continue;
            }

            for (int i = 0; i < n; i++) {
                cout << "Masukkan elemen ke-" << (i + 1) << ": ";
                cin >> *(data + i);
            }

            cout << "Pilih urutan: 1 = Ascending, 2 = Descending: ";
            char sort_order;
            cin >> sort_order;

            if (sort_order == '1') {
                bubble_sort_asc(data, n);
                cout << "Array setelah diurutkan (Ascending): ";
            } else if (sort_order == '2') {
                bubble_sort_desc(data, n);
                cout << "Array setelah diurutkan (Descending): ";
            } else {
                cout << "Pilihan tidak valid. Kembali ke menu utama...\n";
                continue;
            }

            for (int i = 0; i < n; i++) {
                cout << *(data + i) << " ";
            }
            cout << endl;

        } else if (pilihan == '5') {
            break;
        } else if (pilihan >= '1' && pilihan <= '3') {
            cout << "Hallo, saya menu ke-" << pilihan << endl;
        } else {
            cout << "Pilihan tidak tersedia.\n";
        }

        cout << "Tekan Enter untuk melanjutkan...\n";
        cin.ignore();
        cin.get();
    }

    delete[] data;
    return 0;
}
