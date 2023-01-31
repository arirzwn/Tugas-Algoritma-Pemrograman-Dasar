
#include<iostream>

int main()
{
    float I, V , R;
    float besarArus, besarTegangan, besarHambatan;



    besarArus = V / R;
    besarTegangan = I * R ;
    besarHambatan = V / R ;

    cout << "Masukan nilai arus I : " ;
    cin >> I;
    cout << "Masukan nilai tegangan V : " ;
    cin >> V;
    cout << "Masukan nilai hambatan : " ;
    cin >> R;

    cout << besarArus << endl;

    return 0;
}
