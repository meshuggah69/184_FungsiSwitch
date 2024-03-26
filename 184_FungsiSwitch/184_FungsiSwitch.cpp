// 184_FungsiSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l)
{
    luas = p * l;
}

int fungsiluas(int p, int l)
{
    return p * l;
}

int main()
{
    int panjang, lebar;
    cout << "Masukkan Panjang: ";
    cin >> panjang;
    cout << "Masukkan Lebar: ";
    cin >> lebar;

    prosedurluas(panjang, lebar);
    cout << "luas persegi panjang dengan prosedur: " << luas << endl;

    cout << "Luas Persegi panjang dengan fungsi: " << fungsiluas(panjang, lebar) << endl; 

    return 0;
}

