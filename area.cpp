#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //deklarasi
    double jari, hasil;
    const double p=3.1428;

    cout << "jari-jari lingkaran= ";        //input jari jari lingkaran oleh pengguna
    cin >> jari;                            //memasukkan jari jari ke variable jari
    hasil = jari*(jari*p);                  //perintah penghitungan luas lingkaran
    cout << "luas lingkaran= " << hasil;    //output

    getch();
    return 0;
}
