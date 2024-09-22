#include <iostream>
using namespace std;

int main()
{
    int p,q,r,n;
    cout<<"Menampilan Pengulangan 2x (p), 3x(q),dan 3x(r)"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<endl;
    n = 1;
    for ( p = 1; p <= 2; p++)
    {
        for ( q = p; q <= 3; q++)        
        {
          for ( r = q; r <= 3; r++)
          {
            n = n*4+1;
            cout<<"Indeks = "<<p<<" Dengan Nilai N adalah = "<<n<<endl;
          }
        }
    }
    cout<<"----------------------------------------------"<<endl;
    cout<<"Dengan Nilai Akhir = "<<n<<endl;
    cout<<"----------------------------------------------"<<endl;  
    cin.get();
}