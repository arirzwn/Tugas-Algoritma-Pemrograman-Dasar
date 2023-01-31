#include <iostream>

using namespace std;

double rumus(double);
float rumus(float);
int rumus (int);
double suhu;

int main() {
    cout << "=== Program Konversi Suhu Fahrenheit Ke Celcius === \n"<< endl;
    cout << "Masukan suhu fahrenheit : " ;
    cin >> suhu;
    cout << "Hasil konversi dari " << suhu << " derajat fahrenheit, adalah " << rumus (suhu) << " derajat celcius " << endl;
    return 0;
}
double rumus (double suhu){
    double c= (suhu - 32) * 5/9;
    return c;
}
float rumus (float suhu){
    return (suhu - 32) * 5/9;
}
int rumus (int suhu){
    return (suhu - 32) * 5/9;
}

