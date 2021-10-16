#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
//deklarasi
float keliling,luas,p,l; 
//headder
    cout << "------------------------------------------\n";
    cout << "Kalkulator Luas & Keliling Persegi Panjang\n";
    cout << "------------------------------------------\n";
//input
    cout << "Panjang\t\t: ";
    cin >> p;
    cout << "Lebar\t\t: ";
    cin >> l;
//perintah hitung
   luas = p*l;
   keliling = 2*(p+l);
    //output
    cout << "Luas Persegi Panjang: " << luas <<endl;
    cout << "Keliling Persegi Panjang: " << keliling ;

    getch();
    return 0;
}
