#include <iostream>
#include <string.h>
#define n 9
using namespace std;

int main()
{
	int i,k,x;
	int A[n]={23,17,14,6,13,10,1,5,7};
	cout<<"Sebelum dilakukan pengurutan"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<endl;
	for(i=0;i<=n-1;i++)
		cout<<A[i]<<" ";
		cout<<endl;
	
	cout<<endl;
	for(k=0;k<=n;k++)
	{
		i=k;
		x=A[i];
		while(i>=0 && A[i-1] > x)
		{
			A[i]=A[i-1];
			i--;
		}
		A[i]=x;
		cout<<A[i]<<" ";
	}
	cout<<endl;
	cout<<"Setelah dilakukan pengurutan"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<endl;
	for(i=0;i<=n-1;i++)
		cout<<A[i]<<" ";
		cout<<endl;
	cin.get();
}