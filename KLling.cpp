#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
//deklarasi
float keliling,luas,r,d; //r=jari jari d=diameter
const float p=3.14; //phi
//headder
    cout << "------------------------------------\n";
    cout << "Kalkulator Luas & Keliling Lingkaran\n";
    cout << "------------------------------------\n";
//input
    cout << "Jari-Jari Lingkaran\t\t: ";
    cin >> r;
//perintah hitung
    d = r+r;
    luas = p*r*r;
    keliling = p*d;
//output
    cout << "Luas Lingkaran: " << luas <<endl;
    cout << "Keliling Lingkaran: " << keliling ;

    getch();
    return 0;
}
