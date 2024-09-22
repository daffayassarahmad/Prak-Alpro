#include <iostream>
using namespace std;

int main()
{
	int n=44;
	int *pn=&n;
	cout<<"Alamat Address [pn] = "<<pn<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<endl;
	int m=*pn;
	cout<<"Isi Variabel = "<<m<<endl;
	cout<<"--------------------------------"<<endl;
	cin.get();
}