#include <iostream>
#include <string>
using namespace std;

string daftarMenu[] = {"Mie Nyemek", "Nasi Goreng", "Ayam Geprek", "Otak-Otak", "Roti Bakar"};
int daftarHarga[] = {12000, 15000, 18000, 13000, 20000};
int jumlahMenu = sizeof(daftarMenu) / sizeof(daftarMenu[0]);

void tampilkanMenu() {

    cout << "### DAFTAR MENU MFLH's NONGKS ###" << endl;

    for (int i = 0; i < jumlahMenu; i++) {
        cout << i + 1 << ". " << daftarMenu[i] << "\t-Rp" << daftarHarga[i] << endl;
    }

    cout << "=====================================" << endl;
}

int hitungTotal(int jumlah, int harga) {
    return jumlah * harga;
}

int hitungDiskon(int total) {
    if (total >= 100000) {
        return total * 0.1;
    } else {
        return 0;
    }
}

void tampilkanStruk(int total, int diskon) {
    cout << "\n============ STRUK PEMBAYARAN ============" << endl;
    cout << "Total Belanja  : Rp" << total << endl;
    cout << "Diskon         : Rp" << diskon << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Total Bayar    : Rp" << total - diskon << endl;
    cout << "          Terima Kasih Sudah Mampir!" << endl;
    cout << "###########################################" << endl;

}

int main() {
    int pilihan, jumlah, totalBelanja = 0;
    char lanjut;

    
    tampilkanMenu();
    return 0;
}