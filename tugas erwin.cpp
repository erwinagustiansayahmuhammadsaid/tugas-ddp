#include <iostream>
using namespace std;

/*
===========================================================
Program : Konversi Detik ke Hari, Jam, Menit, dan Detik
Deskripsi : Program ini menerima input bilangan dalam satuan detik,
            kemudian menghitung berapa hari, jam, menit, dan detik
            yang ekuivalen dengan bilangan tersebut.
Contoh :
100000 detik = 1 Hari, 3 Jam, 46 Menit, 40 Detik.
===========================================================
*/

// Fungsi konversi detik
void konversiDetik(int totalDetik, int &hari, int &jam, int &menit, int &detik) {
    // 1 hari = 86400 detik (24 * 3600)
    hari = totalDetik / 86400;

    // Sisa detik setelah dikonversi ke hari
    int sisaHari = totalDetik % 86400;

    // 1 jam = 3600 detik
    jam = sisaHari / 3600;

    // Sisa detik setelah dikonversi ke jam
    int sisaJam = sisaHari % 3600;

    // 1 menit = 60 detik
    menit = sisaJam / 60;

    // Sisa detik terakhir
    detik = sisaJam % 60;
}

int main() {
    int totalDetik;
    int hari, jam, menit, detik;

    cout << "===============================================" << endl;
    cout << "   PROGRAM KONVERSI DETIK KE HARI-JAM-MENIT-DETIK" << endl;
    cout << "===============================================" << endl;
    cout << endl;

    // Input dari pengguna
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
    konversiDetik(totalDetik, hari, jam, menit, detik);

    // Tampilkan hasil konversi
    cout << "Hasil Konversi:" << endl;
    if (hari > 0) {
        cout << totalDetik << " detik = " << hari << " Hari, " 
             << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    } else {
        cout << totalDetik << " detik = " << jam << " Jam, " 
             << menit << " Menit, " << detik << " Detik." << endl;
    }

    cout << "===============================================" << endl;
    cout << "        Konversi Berhasil Dilakukan!" << endl;
    cout << "===============================================" << endl;

    return 0;
}
