#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout<<"Menkonversi Nilai Menjadi Huruf"<<endl;
    cout<<"==============================="<<endl;
    cout<<"Masukkan Nilai [1-5]= ";cin>>angka;
    if (angka == 1)
        cout<<"1 = A"<<endl;
    else if (angka == 2)
        cout<<"2 = B"<<endl;
    else if (angka == 3)
        cout<<"3 = C"<<endl;
    else if (angka == 4)
        cout<<"4 = D"<<endl;
    else if (angka == 5)
        cout<<"5 = E"<<endl;
    cin.get();    
}