#include <iostream>
#include <iomanip>  // untuk manipulasi tampilan
using namespace std;

/*
===========================================================
Program : Konversi Detik ke Jam, Menit, dan Detik
Deskripsi : Program ini menerima input bilangan dalam satuan detik,
            kemudian menghitung berapa jam, menit, dan detik
            yang ekuivalen dengan bilangan tersebut.
Contoh : 50000 detik = 13 Jam, 53 Menit, 20 Detik.
===========================================================
*/

// Fungsi untuk melakukan konversi dari detik ke jam, menit, dan detik
void konversiDetik(int totalDetik, int &jam, int &menit, int &detik) {
    // 1 jam = 3600 detik
    jam = totalDetik / 3600;
    
    // Sisa detik setelah dikonversi ke jam
    int sisa = totalDetik % 3600;
    
    // 1 menit = 60 detik
    menit = sisa / 60;
    
    // Sisa akhir detik
    detik = sisa % 60;
}

int main() {
    // Deklarasi variabel
    int totalDetik;
    int jam, menit, detik;

    cout << "===============================================" << endl;
    cout << "      PROGRAM KONVERSI DETIK KE JAM-MENIT-DETIK" << endl;
    cout << "===============================================" << endl;
    cout << endl;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << " >> ";
    cin >> totalDetik;

    cout << endl;

    // Validasi input
    if (cin.fail() || totalDetik < 1) {
        cout << "Input tidak valid! Harap masukkan bilangan bulat positif." << endl;
        return 0;
    }

    // Panggil fungsi konversi
    konversiDetik(totalDetik, jam, menit, detik);

    // Tampilkan hasil konversi
    cout << "Hasil Konversi:" << endl;
    cout << totalDetik << " detik = " << jam << " Jam, "
         << menit << " Menit, " << detik << " Detik." << endl;

    cout << "===============================================" << endl;
    cout << "        Konversi Berhasil Dilakukan!" << endl;
    cout << "===============================================" << endl;

    return 0;
}


