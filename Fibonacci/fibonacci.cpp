#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "### PROGRAM DERET FIBONACCI ###" << endl;
    cout << "Masukkan jumlah deret yang diinginkan: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1;

        if (i < n) {
            cout << ", ";
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}