#include <iostream>

using namespace std;

int main () {
    int kode_kendaraan, jam_masuk, jam_keluar, bayar, lama_parkir, lama_parkir2;
    cout << "Pilih jenis Kendaraan 1. Motor, 2. Mobil : ";
    cin >> kode_kendaraan;
    cout << "Jam masuk : " ;
    cin >> jam_masuk;
    cout << "Jam keluar : " ;
    cin >> jam_keluar;
    lama_parkir = jam_keluar - jam_masuk;
    lama_parkir2 = lama_parkir - 2;
    bayar = lama_parkir2*2000;
    if (kode_kendaraan == 1) {

        cout << "Biaya parkir 2 jam pertama : " << 3000 << endl;
        cout << "Anda parkir selama : " << lama_parkir << endl;
        cout << "Biaya parkir anda adalah : " << bayar+3000 << endl;
       /* } else{

        cout << "Biaya parkir 2 jam pertama : " << 3000 << endl;


        cout << "Anda parkir selama : " << lama_parkir << endl;
        lama_parkir2 = 3000 + (lama_parkir)
        cout << "Biaya parkir anda adalah : " << 3000 << endl;*/

        }



}
