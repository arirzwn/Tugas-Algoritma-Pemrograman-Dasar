#include <iostream>

using namespace std;

int main(){

    // deklarasi variabel
    float I, V, R;
    float rumusArus, rumusTegangan, rumusHambatan;

    // input
    cout << "masukan nilai arus (I) ";
    cin >> I;
    cout << "masukan nilai tegangan (V)";
    cin >> V;
    cout << "masukan nilai hambatan (R) ";
    cin >> R;

    // rumus
    rumusArus = V / R;
    rumusTegangan = I * R;
    rumusHambatan = V / I;

    // hasil akhir
    cout << "hasil perhitungan dari arus (I): " << rumusArus << endl;
    cout << "hasil perhitungan dari tegangan (V): " << rumusTegangan << endl;
    cout << "hasil perhitungan dari hambatan (R): " << rumusHambatan << endl;

    return 0;
}
