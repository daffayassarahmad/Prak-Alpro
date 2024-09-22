#include <iostream>
using namespace std;

int main()
{
	int n,*pn,**ppn;
	n=44;
	pn=&n;
	ppn=&pn;
	cout<<"Isi Variabel [n-*pn-*ppn] = "<<n<<" - "<<*pn<<" - "<<*ppn<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Alamat Variabel [&n-&pn-&ppn] = "<<&n<<" - "<<&pn<<" - "<<&ppn<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Isi Variabel dengan HEXA [n-pn-ppn] = "<<n<<" - "<<pn<<" - "<<ppn<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<endl;
	cin.get();
}