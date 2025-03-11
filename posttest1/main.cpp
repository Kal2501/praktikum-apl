#include <iostream>
using namespace std;

int main()
{
    float saldo = 0;
    int inputPin;
    int pin = 6054;
    bool akses = false;
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan PIN: ";
        cin >> inputPin;
        if (inputPin == pin)
        {
            akses = true;
            break;
        }
        else
        {
            cout << "PIN yang Anda Masukkan Salah" << endl;
        }
    }
    while (akses == true)
    {
        int pilih;
        cout << "Menu" << endl;
        cout << "1. Setor Tunai" << endl;
        cout << "2. Cek Saldo" << endl;
        cout << "3. Tarik Tunai" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih == 1)
        {
            float setor;
            cout << "Setor Tunai" << endl;
            cout << "Masukkan jumlah uang: ";
            cin >> setor;
            saldo += setor;
        }
        else if (pilih == 2)
        {
            cout << "Jumlah Saldo di Account ini: ";
            cout << "Rp" << saldo << endl;
        }
        else if (pilih == 3)
        {
            float tarik;
            cout << "Tarik Tunai" << endl;
            cout << "Masukkan jumlah uang: ";
            cin >> tarik;
            saldo -= tarik;
        }
        else if (pilih == 0)
        {
            break;
        }
    }
}