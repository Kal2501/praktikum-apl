#include <iostream>
using namespace std;

int main()
{
    string nama[7] = {"Andi", "Kalingga", "Harahap"};
    for (int i = 0; i < 7; i++)
    {
        cout << nama[i] << endl;
    }
    for (string item : nama)
    {
        cout << item << endl;
    }
}