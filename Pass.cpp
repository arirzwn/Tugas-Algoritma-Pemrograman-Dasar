#include <iostream>

using namespace  std;

int main ()
{
    string username; //Variabel username dengan tipe data string karena username bisa saja memuat karakter dan angka
    string password; //Variabel password dengan tipe data string karena username bisa saja memuat karakter dan angka

    cout << "Masukkan Username : " ; // Untuk input value pada username yang nantinya akan dimasukan ke variabel username
    cin >> username ;
    cout << "Masukkan Password : " ; // Untuk input value pada password yang nantinya akan dimasukan ke variabel password
    cin >> password;

    //Proses validasi value pada variabel username dan password
    if (username == "admin" && password == "admin123"){
        cout << "Username dan password sesuai, Login berhasil !" << endl;}
        else if (username == "admin" && password != "admin123"){
        cout << "Username sesuai, password tidak sesuai !"<< endl;}
        else if (username != "admin" && password == "admin123"){
        cout << "Username tidak sesuai, password sesuai !" << endl; }
        else { cout << "Username dan password tidak sesuai!" << endl; }

return 0;
}
