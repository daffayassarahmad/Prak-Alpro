#include <iostream>
using namespace std;

int main()
{
    int W;
    W = 1;
    cout<<"Menampilkan Tulisan 2 Baris"<<endl;
    cout<<"==========================="<<endl;
    do
    {
        cout<<"Yang Ke = "<<W<<endl;
        cout<<"Selamat Datang"<<endl;
        cout<<"----MinGW-----"<<endl;
        cout<<endl;
        W++;
    }
    while (W <=5);
    cin.get();
    
}