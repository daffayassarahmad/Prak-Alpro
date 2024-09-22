#include <iostream>
using namespace std;

int main()
{
    int k,i,n;
    cout<<"Menampilkan Pengulangan 4x(k) dan 6x(n)"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<endl;
    n=0;
    for (k=1;k<=4;k++)
        for (i=k;i<=6;i++)
        n=n+5;
        cout<<"Nilai Akhir dari N adalah "<<n<<endl;
    cin.get();
}