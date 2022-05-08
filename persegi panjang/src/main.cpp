#include <iostream>
#include <vector>

#include "include/persegipanjang.hpp"

using namespace std;

void PrintPP(PersegiPanjang &pp)
{
    cout << "Pusat X: " << pp.Getpusatx() << "    ";
    cout << "Pusat Y: " << pp.Getpusaty() << endl;
    cout << "Panjang: " << pp.Getpanjang() << "    ";
    cout << "Lebar: " << pp.Getlebar() << endl;
    cout << "X Min: " << pp.GetXmin() << "    ";
    cout << "X Max: " << pp.GetXmax() << endl;
    cout << "Y Min: " << pp.GetYmin() << "    ";
    cout << "Y Max: " << pp.GetYmax() << endl;
}

int main()
{
    int pusatx, pusaty, panjang, lebar;

    system("CSL||clear");

    cout << "------ Persegi Panjang 1 ------" << endl;

    cout << endl
         << "Masukkan titik tengah x : ";
    cin >> pusatx;
    cout << endl
         << "Masukkan titik tengah y : ";
    cin >> pusaty;
    cout << endl
         << "Masukkan panjang : ";
    cin >> panjang;
    cout << endl
         << "Masukkan lebar : ";
    cin >> lebar;

    PersegiPanjang pp1(pusatx, pusaty, panjang, lebar);

    system("CSL||clear");

    cout << "------ Persegi Panjang 2 ------" << endl;

    cout << endl
         << "Masukkan titik tengah x : ";
    cin >> pusatx;
    cout << endl
         << "Masukkan titik tengah y : ";
    cin >> pusaty;
    cout << endl
         << "Masukkan panjang : ";
    cin >> panjang;
    cout << endl
         << "Masukkan lebar : ";
    cin >> lebar;

    PersegiPanjang pp2(pusatx, pusaty, panjang, lebar);

    while (1)
    {
        system("CSL||clear");

        cout << "Persegi Panjang 1" << endl;
        PrintPP(pp1);
        cout << endl;
        cout << "Persegi Panjang 2" << endl;
        PrintPP(pp2);

        cout << endl;
        cout << "Pilih operasi yang ingin dilakukan : " << endl;
        cout << "1. +" << endl;
        cout << "2. -" << endl;
        cout << "3. ==" << endl;
        cout << "4. ++" << endl;
        cout << "5. --" << endl;
        cout << "6. []" << endl;
        cout << "0. Keluar" << endl;
        cout << endl
             << "-> ";

        int input;
        string blank;
        cin >> input;
        cin.ignore();

        switch (input)
        {
        case 1:
        {
            system("CLS||clear");
            if (!(pp1 == pp2))
            {
                cout << " Kedua Persegi Panjang Tidak Beririsan";
                cin.ignore();
                break;
            }

            PersegiPanjang pp3 = pp1 + pp2;

            cout << "Persegi Panjang Baru" << endl;
            PrintPP(pp3);

            cin.ignore();
            break;
        }

        case 2:
        {
            system("CLS||clear");

            if (!(pp1 == pp2))
            {
                cout << " Kedua Persegi Panjang Tidak Beririsan";
                cin.ignore();
                break;
            }

            PersegiPanjang pp3 = pp1 - pp2;

            cout << "Persegi Panjang Baru" << endl;
            PrintPP(pp3);

            cin.ignore();
            break;
        }

        case 3:
        {
            system("CLS||clear");
            cout << "Apakah Kedua Persegi Panjang Beririsan?" << endl;
            cout << (pp1 == pp2 ? "Ya" : "Tidak");

            cin.ignore();
            break;
        }

        case 4:
        {
            pp1++;
            pp2++;

            break;
        }

        case 5:
        {
            pp1--;
            pp2--;

            break;
        }

        case 6:
        {
            system("CLS||clear");

            cout << "Persegi Panjang 1" << endl;
            cout << "[0] " << pp1[0] << "   ";
            cout << "[1] " << pp1[1] << "   ";
            cout << "[2] " << pp1[2] << "   ";
            cout << "[3] " << pp1[3] << "   ";

            cout << endl
                 << endl;

            cout << "Persegi Panjang 2" << endl;
            cout << "[0] " << pp2[0] << "   ";
            cout << "[1] " << pp2[1] << "   ";
            cout << "[2] " << pp2[2] << "   ";
            cout << "[3] " << pp2[3] << "   ";

            cin.ignore();
            break;
        }

        case 0:
            return 0;

        default:
            break;
        }
    }

    return 0;
}