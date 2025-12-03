#include <iostream>
using namespace std;

int pangkat(int a, int b) {
    if (b == 0) return 1;     // basis
    return a * pangkat(a, b - 1); // rekursi
}

int main() {
    int a, b;

    cout << "Masukkan basis (a): ";
    cin >> a;
    cout << "Masukkan pangkat (b): ";
    cin >> b;

    cout << "Hasil = " << pangkat(a, b) << endl;

    return 0;
}
