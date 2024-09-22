#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Menampilkan Nilai yang Disukai"<<endl;
    cout<<"=============================="<<endl;
    cout<<endl;
    cout<<"Masukkan Nilai yang Anda Disukai [1-7]= ";cin>>N;
    if (N == 1)
        cout<<"Satu"<<endl;
    else
        if (N == 2)
            cout<<"Dua"<<endl;
        else
            if (N == 3)
                cout<<"Tiga"<<endl;
            else
                if (N == 4)
                    cout<<"Empat"<<endl;   
                else
                    if (N == 5)
                        cout<<"Lima"<<endl;
                    else
                        if (N == 6)
                            cout<<"Enam"<<endl;
                        else
                            if (N == 7) 
                                cout<<"Tujuh"<<endl;
                            else
                                cout<<"ANGKA TIDAK VALID"<<endl;
    cin.get();
}