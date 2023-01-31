#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    float b = 25, x = 15, c = 20;
    float Y;

    // Menampilkan di consol
    cout << "Nilai b: " << b << endl;
    cout << "Nilai x: " << x << endl;
    cout << "Nilai c: " << c << endl;

    // rumus
    Y = (b*x*x) + 0.5 * x - c;

    // hasil perhitungan
    cout << "Hasil dari rumus Y = bx2 + 0,5x - c adalah: " << Y << endl;

  return 0;
}
