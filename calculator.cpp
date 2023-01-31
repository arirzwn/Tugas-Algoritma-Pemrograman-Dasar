#include <iostream>

using namespace std;

int main ()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Program Kalkulator Sederhana \n \n";
    cout << "Masukan nilai pertama : " ;
    cin >> a;
    cout << "Pilih operator +,-,*,/ : " ;
    cin >> aritmatika;
    cout << "Masukan nilai kedua : ";
    cin >> b;

    cout << "Hasil perhitungan dari : " ;
    cout << a << aritmatika << b ;

    if(aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '*') {
        hasil = a * b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    } else {
        cout << "Operator salah!!" ;
    }

    cout << "=" << hasil << endl;

    return  0;
}
