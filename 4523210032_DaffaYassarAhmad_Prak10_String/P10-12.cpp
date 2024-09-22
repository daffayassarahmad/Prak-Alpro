#include <iostream>
using namespace std;

int main()
{
	int a[10], n, i;
	cout<<"Konversi Desimal ke Biner" <<endl;
	cout<< "-------------------------" <<endl;
	cout<<endl;
	cout<<"Input angka desimal: ";cin>>n;
	for(i=0; n>0; i++)
	{
		a[i] = n%2;
		n = n/2;
	}
 
	cout<<"Angka binernya adalah: ";
	for(i=i-1 ;i>=0 ;i--) 
	{
		cout<<a[i];
	}
	cout<<endl;
	
	return 0;
}