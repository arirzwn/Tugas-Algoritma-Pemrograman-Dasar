#include <iostream>

using namespace std;

int main(){

    // deklarasi variabel
    float I, V, R;
    float menghitungArus, menghitungTegangan, menghitungHambatan;

    cout << "Nama  : Ari Rizwan    " << endl;
    cout << "Kelas : 1A Informatika" << endl;
    cout << "NPM   : 2210631170008 " << endl;

    cout << "===========================" << endl;


    // input
    cout << "Masukan nilai arus (I)     : ";
    cin >> I;
    cout << "Masukan nilai tegangan (V) : ";
    cin >> V;
    cout << "Masukan nilai hambatan (R) : ";
    cin >> R;

    // rumus
    menghitungArus = V / R;
    menghitungTegangan = I * R;
    menghitungHambatan = V / I;

    // hasil akhir
    cout << "hasil perhitungan dari arus (I)    : " << menghitungArus << endl;
    cout << "hasil perhitungan dari tegangan (V): " << menghitungTegangan << endl;
    cout << "hasil perhitungan dari hambatan (R): " << menghitungHambatan << endl;

    return 0;
}
