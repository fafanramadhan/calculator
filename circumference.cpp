#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //deklarasi
    float jari, hasil;
    const float p=3.14; //phi 3.14

    cout << "Panjang jari-jari lingkaran= ";        //input jari jari lingkaran atau 1/2 diameter
    cin >> jari;                                    // memasukkan jari jari ke variable jari
    hasil = (jari*p)*2;                             // perintah penghitungan
    cout << "keliling lingkaran= " << hasil;        // output

    getch();                                        
    return 0;
}
