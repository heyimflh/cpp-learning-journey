#include <iostream>
using namespace std;

// Definisi konstanta PI tanpa titik koma
#define PI 3.14

// --- Fungsi Perhitungan ---
double luasPersegi(double s) { return s * s; }
double kelilingPersegi(double s) { return 4 * s; }
double luasPersegiPanjang(double p, double l) { return p * l; }
double kelilingPersegiPanjang(double p, double l) { return 2 * (p + l); }
double luasSegitiga(double a, double t) { return 0.5 * a * t; }
double kelilingSegitiga(double a, double b, double c) { return a + b + c; }
double luasJajargenjang(double a, double t) { return a * t; }
double kelilingJajargenjang(double a, double b) { return 2 * (a + b); }
double luasTrapesium(double a, double b, double t) { return 0.5 * (a + b) * t; }
double kelilingTrapesium(double a, double b, double c, double d) { return a + b + c + d; }
double luasBelahketupat(double d1, double d2) { return 0.5 * d1 * d2; }
double kelilingBelahketupat(double s) { return 4 * s; }
double luasLayangan(double d1, double d2) { return 0.5 * d1 * d2; }
double kelilingLayangan(double a, double b) { return 2 * (a + b); }
double luasLingkaran(double r) { return PI * r * r; }
double kelilingLingkaran(double r) { return 2 * PI * r; }

int main() {
    int pilihan;
    double a, b, c, d, p, l, s, r, t, d1, d2;
    char lanjut;

    do {
        // Membersihkan layar (opsional, gunakan system("cls") di Windows)
        cout << "\n=======================================================" << endl; 
        cout << "               Kalkulator Bangun Datar" << endl;
        cout << "========================================================" << endl;
        cout << "1.  Luas Persegi          9.  Luas Trapesium" << endl;
        cout << "2.  Keliling Persegi      10. Keliling Trapesium" << endl;
        cout << "3.  Luas Persegi Panjang  11. Luas Belah Ketupat" << endl;
        cout << "4.  Keliling P. Panjang   12. Keliling Belah Ketupat" << endl;
        cout << "5.  Luas Segitiga         13. Luas Layang-Layang" << endl;
        cout << "6.  Keliling Segitiga     14. Keliling Layang-Layang" << endl;
        cout << "7.  Luas Jajargenjang     15. Luas Lingkaran" << endl;
        cout << "8.  Keliling Jajargenjang 16. Keliling Lingkaran" << endl;
        cout << " Masukkan pilihan (1-16): ";
        cin >> pilihan;

        cout << "-----------------------------------------" << endl;

        switch(pilihan) {
            case 1:
                cout << "Input Sisi: "; cin >> s;
                cout << "Hasil Luas: " << luasPersegi(s) << endl; break;
            case 2:
                cout << "Input Sisi: "; cin >> s;
                cout << "Hasil Keliling: " << kelilingPersegi(s) << endl; break;
            case 3:
                cout << "Input Panjang & Lebar: "; cin >> p >> l;
                cout << "Hasil Luas: " << luasPersegiPanjang(p, l) << endl; break;
            case 4:
                cout << "Input Panjang & Lebar: "; cin >> p >> l;
                cout << "Hasil Keliling: " << kelilingPersegiPanjang(p, l) << endl; break;
            case 5:
                cout << "Input Alas & Tinggi: "; cin >> a >> t;
                cout << "Hasil Luas: " << luasSegitiga(a, t) << endl; break;
            case 6:
                cout << "Input 3 Sisi (a b c): "; cin >> a >> b >> c;
                cout << "Hasil Keliling: " << kelilingSegitiga(a, b, c) << endl; break;
            case 7:
                cout << "Input Alas & Tinggi: "; cin >> a >> t;
                cout << "Hasil Luas: " << luasJajargenjang(a, t) << endl; break;
            case 8:
                cout << "Input Alas & Sisi Miring: "; cin >> a >> b;
                cout << "Hasil Keliling: " << kelilingJajargenjang(a, b) << endl; break;
            case 9:
                cout << "Input 2 Sisi Sejajar & Tinggi: "; cin >> a >> b >> t;
                cout << "Hasil Luas: " << luasTrapesium(a, b, t) << endl; break;
            case 10:
                cout << "Input 4 Sisi (a b c d): "; cin >> a >> b >> c >> d;
                cout << "Hasil Keliling: " << kelilingTrapesium(a, b, c, d) << endl; break;
            case 11:
                cout << "Input Diagonal 1 & 2: "; cin >> d1 >> d2;
                cout << "Hasil Luas: " << luasBelahketupat(d1, d2) << endl; break;
            case 12:
                cout << "Input Sisi: "; cin >> s;
                cout << "Hasil Keliling: " << kelilingBelahketupat(s) << endl; break;
            case 13:
                cout << "Input Diagonal 1 & 2: "; cin >> d1 >> d2;
                cout << "Hasil Luas: " << luasLayangan(d1, d2) << endl; break;
            case 14:
                cout << "Input Sisi Pendek & Panjang: "; cin >> a >> b;
                cout << "Hasil Keliling: " << kelilingLayangan(a, b) << endl; break;
            case 15:
                cout << "Input Jari-jari: "; cin >> r;
                cout << "Hasil Luas: " << luasLingkaran(r) << endl; break;
            case 16:
                cout << "Input Jari-jari: "; cin >> r;
                cout << "Hasil Keliling: " << kelilingLingkaran(r) << endl; break;
            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

        cout << "-----------------------------------------" << endl;
        cout << "Hitung lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\nTerima kasih telah menggunakan kalkulator ini!" << endl;
    return 0;
}