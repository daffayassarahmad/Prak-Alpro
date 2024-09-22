#include <iostream>
#include <string.h>
#define c 9
using namespace std;

int main()
{
	int d,a,f,h;
	int A[9];
	for (int b=0;b<9;++b)
	{
		cout<<"Masukkan Angka ke-"<<b+1<<" : ";cin>>A[b];
	}
	cout<<endl;
	cout<<"Sebelum dilakukan pengurutan"<<endl;
	cout<<"-----------------------------"<<endl;
	for(d=0;d<9;d++)
		cout<<A[d]<<" ";
		cout<<endl;

	cout<<endl;
	for(d=0;d<8;d++)
	{
		h=d;
		for(a=d+1;a<9;a++)
		{
			if(A[a]<A[h])
			{
				h=a;
			}
		}
		if(A[d]>A[h])
		{
			f=A[d];
			A[d]=A[h];
			A[h]=f;
		}
	}
	cout<<"Setelah dilakukan pengurutan"<<endl;
	cout<<"----------------------------"<<endl;
	for(d=0;d<9;d++)
		cout<<A[d]<<" ";
		cout<<endl;
	cin.get();
}