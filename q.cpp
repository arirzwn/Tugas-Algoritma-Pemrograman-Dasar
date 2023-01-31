#include <iostream>
using namespace std;
int penjumlahan(int, int);
int penjumlahan(int, int, int);
double penjumlahan(double, double);
int main() {
    cout << "Masukan nilai : " ;
    cin >> penjumlahan >> endl;
 cout << "Hasil penjumlahan: " << penjumlahan(int, int ) << endl;
 cout << "Hasil penjumlahan: " << penjumlahan(int, int, int) << endl;
 cout << "Hasil penjumlahan: " << penjumlahan(double, double << endl;
 return 0;
}
int penjumlahan(int bil1, int bil2){
 return (bil1 + bil2);
}
int penjumlahan(int bil1, int bil2, int bil3){
 return (bil1 + bil2+bil3);
}
double penjumlahan(double bil1, double bil2){
 return (bil1 + bil2);
}
