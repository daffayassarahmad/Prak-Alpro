#include <iostream>
using namespace std;

int main()
{
	long int k,n,fakt_iter=1;
	cout<<"Menampilkan Rekursif"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukkan Bilangan = ";cin>>n;
	cout<<endl;
	for (k=1;k<=n;k++)
	{
		fakt_iter=fakt_iter*k;
		cout<<"Faktorial dari "<<k<<" ! adalah "<<fakt_iter<<endl;
	}
	cin.get();
}