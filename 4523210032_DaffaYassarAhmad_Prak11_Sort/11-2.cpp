#include <iostream>
#include <string.h>
#define n 9
using namespace std;

int i,j,k,x;

void Tampil1()
{
	int A[n]={23,17,14,6,13,10,1,5,7};
	cout<<"Sebelum dilakukan pengurutan"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<endl;
	for(i=0;i<=n-1;i++)
		cout<<A[i]<<" ";
		cout<<endl;
}

void Tampil2()
{
	int A[n];
	cout<<"Step By Step Dilakukan pengurutan"<<endl;
	cout<<"---------------------------------"<<endl;
	k=0;
	while (k<=n-2)
	{
		j=k;
		i=k+1;
		while (i<=n-1)
		{
			if(A[i]>A[j])
				j=i;
				cout<<A[i]<<" ";
				i++;
		}
		cout<<endl;
		x=A[j];
		A[j]=A[k];
		A[k]=x;
		k++;
	}
}

void Tampil3()
{
	int A[n];
	cout<<"Setelah dilakukan pengurutan"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<endl;
	for(i=0;i<=n-1;i++)
		cout<<A[i]<<" ";
		cout<<endl;
}

int main()
{
	Tampil1();
	Tampil2();
	Tampil3();
	cin.get();
}