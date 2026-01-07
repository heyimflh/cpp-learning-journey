#include <iostream>
#include <string>
#include <iomanip> // Untuk merapikan output angka

using namespace std;

// Array Global agar bisa diakses semua fungsi
string namaBarang[] = {"Nasi Kucing", "Sate Puyuh", "Sate Usus", "Es Teh Manis", "Susu Jahe"};
int hargaBarang[] = {3500, 3500, 2500, 4000, 6000};
int jumlahMenu = 5;

// --- 1. Fungsi Tampilkan Menu ---
void tampilkanMenu() {
    cout << "\n========== MENU ANGKRINGAN DIGITAL ==========" << endl;
    cout << left << setw(5) << "No" << setw(20) << "Menu" << "Harga" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < jumlahMenu; i++) {
        cout << left << setw(5) << i + 1 
             << setw(20) << namaBarang[i] 
             << "Rp " << hargaBarang[i] << endl;
    }
    cout << "---------------------------------------------" << endl;
}

// --- 2. Fungsi Hitung Subtotal ---
int hitungSubtotal(int harga, int jumlah) {
    return harga * jumlah;
}

// --- 3. Fungsi Hitung Diskon ---
int hitungDiskon(int total) {
    if (total >= 50000) { // Contoh: Diskon jika belanja di atas 50rb
        return total * 0.1; // Diskon 10%
    } else {
        return 0;
    }
}

// --- 4. Fungsi Tampilkan Struk ---
void tampilkanStruk(int total, int diskon) {
    cout << "\n================ STRUK PEMBAYARAN ================" << endl;
    cout << "Total Belanja : Rp " << total << endl;
    cout << "Diskon        : Rp " << diskon << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "TOTAL BAYAR   : Rp " << total - diskon << endl;
    cout << "==================================================" << endl;
    cout << "Terima kasih sudah mampir!" << endl;
}

int main() {
    int pilihan, jumlah, totalBelanja = 0;
    char lanjut;

    do {
        tampilkanMenu();
        
        // Input Pilihan
        cout << "Pilih nomor menu (1-" << jumlahMenu << "): ";
        cin >> pilihan;
        
        // Validasi input
        if (pilihan < 1 || pilihan > jumlahMenu) {
            cout << "Menu tidak tersedia!" << endl;
        } else {
            cout << "Jumlah beli untuk " << namaBarang[pilihan-1] << ": ";
            cin >> jumlah;

            // Proses Hitung
            int subtotal = hitungSubtotal(hargaBarang[pilihan-1], jumlah);
            totalBelanja += subtotal;
            
            cout << "> Subtotal: Rp " << subtotal << endl;
        }

        // Tanya perulangan
        cout << "\nMau tambah menu lain? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    // Finalisasi
    int potongan = hitungDiskon(totalBelanja);
    tampilkanStruk(totalBelanja, potongan);

    return 0;
}