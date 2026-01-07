#include <iostream>
using namespace std;

// Prototype
double faktorial(int n);

int main() {
    int angka;
    double hasil;

    cout << "=== Program Faktorial Rekursif ===" << endl;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial tidak didefinisikan untuk bilangan negatif." << endl;
    } else {
        cout << "Faktorial dari " << angka << " adalah: " << endl;
        hasil = faktorial(angka);
        cout << "\nNilai : " << hasil << endl;
    }

    return 0;
}

double faktorial(int n) {
    if (n <= 1) {
        cout << n;
        return 1;
    } else {
        cout << n << " * ";
        return (double)n * faktorial(n - 1);
    }
}