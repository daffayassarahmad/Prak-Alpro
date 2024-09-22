#include <iostream>
using namespace std;

int main()
{
    int Kelamin,Tinggi;
    cout<<"Syarat Tinggi Badan dalam Suatu Test"<<endl;
    cout<<"===================================="<<endl;
    cout<<"1). Laki-laki"<<endl;
    cout<<"2). Perempuan"<<endl;

    cout<<"Pilih [1/2] = ";cin>>Kelamin;
    cout<<"===================================="<<endl;
    if (Kelamin == 1)
    {
        cout<<"Anda Memilih Laki-laki"<<endl;
        cout<<"Masukkan Tinggi Badan = ";cin>>Tinggi;
        if(Tinggi>165)
            cout<<"Memenuhi Syarat dan Lulus"<<endl;
        else

            cout<<"Tidak Lulus"<<endl;
    }

    if (Kelamin == 2)
    {
        cout<<"Anda Memilih Perempuan"<<endl;
        cout<<"Masukkan Tinggi Badan = ";cin>>Tinggi;
        if(Tinggi>160)
            cout<<"Memenuhi Syarat dan Lulus"<<endl;
        else
            cout<<"Tidak Lulus"<<endl;
    }
    cin.get();
}