#include<iostream> //Untuk menggunakan library pada direktori

using namespace std; // Untuk menggunakan code standar secara global agar kode lebih ringkas

main(){

    float luas, phi = 3.14; // Nilai konstan dari phi, "float" digunakan untuk sebuah nilai desimal
    int  r;

    cout << " Masukkan jari-jari lingkaran = "; // Untuk menampilkan input nilai pada consol
    cin >> r; // Untuk melakukan input nilai pada console

    luas = phi * r * r; // Rumus hitung luas lingkaran

    cout << "Luas lingkaran = " << luas << endl; // Untuk menampilkan hasil dari perhitungan luas lingkaran

    return 0 ;
}
