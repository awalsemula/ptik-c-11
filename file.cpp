#include <iostream>
#include <string>
using namespace std;

struct Karyawan {
    string nama;
    string nik;
    string tanggalLahir;
};

const int max_karyawan = 2;
Karyawan dataKaryawan[max_karyawan];
int jumlahKaryawan = 0;

int main() {
    int pilihan;

    do {
    	 cout << "									\n";
        cout << "===== Aplikasi Data Karyawan =====\n";
        cout << "1. Tampilkan Data Karyawan\n";
        cout << "2. Tambah Data Karyawan\n";
        cout << "3. Update Data Karyawan\n";
        cout << "4. Hapus Data Karyawan\n";
        cout << "0. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan buffer keyboard

        
    } while (pilihan != 0);

	

    return 0;
}
