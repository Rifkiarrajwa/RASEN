#include <iostream>
#include <cmath>

using namespace std;
float x;
float y;
float hasil;
char repeat;

int main (){ 
    cout<<"Menghitung Panjang Vektor 2 dimensi"<<endl;
do {
    // Input Komponen Vektor
    cout<<"Masukkan Komponen X: ";
    cin>>x;
    cout<<"Masukkan Komponen Y: ";
    cin>>y;

    // Menghitung Panjang Vektor
    hasil=sqrt(x*x+y*y);
    cout<<"Panjang vektor adalah: "<<hasil<<endl;
    
    // Tanyakan pengguna apakah mau mengulang
    cout<<"Coba Lagi? (y / n)"<<endl;
    cin>>repeat;
    
    } while (repeat == 'y' || repeat == 'Y'); // Mengulang jika pengguna input 'y' atau 'Y'

    cout<<"Terimakasih."<<endl;
return 0; // Program berhenti jika pengguna input 'n' atau 'N'
}
