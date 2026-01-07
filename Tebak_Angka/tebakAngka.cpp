#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int tebakan;
    int percobaan = 0;
    int skor = 100;

    srand(time(0));
    int jawaban = 1 + (rand() % 50);

    cout << "SELAMAT DATANG DI GAME TEBAK ANGKA" << endl;
    cout << jawaban << endl;
    
    while (true) {
        cout << "Anda harus menebak angka antara 1 - 50!" << endl;
        cout << "Silakan masukkan tebakan Anda: ";
        cin >> tebakan;
        percobaan++;

        if (tebakan < 1 || tebakan > 50) {
            cout << "Error! Mohon masukkan angka antara 1 - 50." << endl;
            continue;
        }

        if (percobaan > 10) {
            cout << "Kesempatan Anda telah habis!";
            break;
        }

        if (tebakan < jawaban) {
            cout << "Tebakan angka Anda terlalu kecil!" << endl;
            cout << endl;
        } else if (tebakan > jawaban) {
            cout << "Tebakan angka Anda terlalu besar!" << endl;
            cout << endl;
        } else {
            cout << "Selamat! Tebakan Anda benar, yaitu " << jawaban << endl;
            cout << "Anda menebak angka sebanyak " << percobaan << " kali" << endl;
            if (percobaan == 1) {
                cout << "Sempurna! Skor Anda: " << skor << endl;
            } else {
                skor -= 10 * percobaan;
                cout << "Skor Anda: " << skor << endl;
            }
            break;
        }
    }

    return 0;
}