#include <iostream>
#include <string.h>
#define c 9
using namespace std;

int d,a,f,h;
int A[9];

void DAFFA1()
{
	
	for (int b=0;b<9;b++)
	{
		cout<<"Masukkan Angka ke-"<<b+1<<" : ";cin>>A[b];
	}
	

	cout<<"-----------------------------"<<endl;
	cout<<"Sebelum dilakukan pengurutan"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<endl;
	for(d=0;d<=c-1;d++)
		cout<<A[d]<<" ";
		cout<<endl;
}

void DAFFA2()
{
	cout<<"Step By Step Dilakukan pengurutan"<<endl;
	cout<<"---------------------------------"<<endl;
	f=0;
	while (f<=c-2)
	{
		a=f;
		d=f+1;
		while (d<=c-1)
		{
			if(A[d]>A[a])
				a=d;
				cout<<A[d]<<" ";
				d++;
		}
		cout<<endl;
		h=A[a];
		A[a]=A[f];
		A[f]=h;
		f++;
	}
}

void DAFFA3()
{	
	cout<<"Setelah dilakukan pengurutan"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<endl;
	for(d=0;d<=c-1;d++)
		cout<<A[d]<<" ";
		cout<<endl;
}

int main()
{
	DAFFA1();
	DAFFA2();
	DAFFA3();
	return 0;
}