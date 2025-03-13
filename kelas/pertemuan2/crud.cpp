#include <iostream>
using namespace std;

#define MAX 100

int main()
{
    string buah[MAX];
    int panjang = 0;
    int pilihan, index;
    if (panjang < MAX)
    {
        cout << "Masukkan nama buah: ";
        getline(cin, buah[panjang]);
        panjang++;
        cout << "n/Berhasil ditambahkan";
    }
}