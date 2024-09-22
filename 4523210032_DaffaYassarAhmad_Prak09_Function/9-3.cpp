#include <iostream>
using namespace std;

int input();
int kali();
int tampil (int hasil[10][10]);
int a[10][10], b[10][10];
int i,j,k,l;

int main()
{
	int pilih;
	input();
	do
	{
		cout<<"Perintah Array/Multi Dimensi"<<endl;
		cout<<"     Menu Operasi Matrik    "<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"1. Perkalian Matrik 		 	"<<endl;
		cout<<"2. Keluar					"<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"Pilihan Anda : ";cin>>pilih;
		switch(pilih)
		{
			case 1:
			{
				kali();
				break;
			}
		}
	}
	while(pilih !=2);
}

int input()
{
	int c,d;
	cout<<"Masukkan Ordo Matrik A: "<<endl;
	do
	{
		cout<<"Jumlah Baris : ";cin>>i;
	}
	while(i >= 11);
	do
	{
		cout<<"Jumlah Kolom : ";cin>>j;
	}
	while(j >=11);
	cout<<"Masukkan Ordo Matrik B: "<<endl;
	do
	{
		cout<<"Jumlah Baris : ";cin>>k;
	}
	while(k >= 11);
	do
	{
		cout<<"Jumlah Kolom : ";cin>>l;
	}
	while(l >=11);
	cout<<"Matrik A: "<<endl;
	for(c=0;c<i;c++)
		for(d=0;d<j;d++)
		{
			cout<<"Masukkan Isi Elemen : ["<<c+1<<"]["<<d+1<<"] : ";
			cin>>a[c][d];
		}
	cout<<"Matrik B: "<<endl;
	for(c=0;c<k;c++)
		for(d=0;d<l;d++)
		{
			cout<<"Masukkan Isi Elemen : ["<<c+1<<"]["<<d+1<<"] :";
			cin>>b[c][d];
		}
}

int kali()
{
	int kalip[10][10]={0},c,d,e;
	if(j==k)
	{
		for(c=0;c<i;c++)
			for(d=0;d<l;d++)
				for(e=0;e<j;e++)
				{
					kalip[c][d]=kalip[c][d]+a[c][e]*b[e][d];
				}
				tampil (kalip);
	}
	else
		cout<<"Ordo Matrik Tidak Sesuai"<<endl;
}

int tampil(int hasil[10][10])
{
	int c,d;
	cout<<"Hasil Operasi Matrik : "<<endl;
	for(c=0;c<i;c++)
	{
		for(d=0;d<l;d++)
		{
			cout<<hasil[c][d]<<" ";
		}
	}
}