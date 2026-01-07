#include <iostream>
using namespace std;

float tambah (float a, float b);
float kurang (float a, float b);
float bagi (float a, float b);
float kali (float a, float b);

int main() {
    float a, b, hasil;
    char operasi;

    cout << "KALKULATOR SEDERHANA" << endl;

    cout << "Masukkan angka pertama: ";
    cin >> a;

    cout << "Pilih Operator (+, -, /, x): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (operasi) {
        case '+':
            hasil = tambah(a, b);
            cout << "Hasil Penjumlahan: " << hasil << endl;
            break;
            case '-':
            hasil = kurang(a, b);
            cout << "Hasil Pengurangan: " << hasil << endl;
            break;
            case '/':
                if (b == 0) {
                    cout << "Error: Hasil pembagian tidak terdefinisi." << endl;
                } else {
                    hasil = bagi(a, b);
                    cout << "Hasil Pembagian: " << hasil << endl;
                }
                break;
            case 'x':
            case '*':
            hasil = kali(a, b);
            cout << "Hasil Perkalian: " << hasil << endl;
            break;
        default:
            cout << "Operator tidak valid, tolong masukkan (+, -, /, x)" << endl;
            break;
    }

    cin.get();
    return 0;
}

float tambah (float a, float b) {
    return a + b;
}
float kurang (float a, float b) {
    return a - b;
}
float bagi (float a, float b) {
    return a / b;
}
float kali (float a, float b) {
    return a * b;
}

