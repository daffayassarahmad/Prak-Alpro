#include <iostream>
using namespace std;
int A[10][10],B[10][10],C[10][10];
int iA,iB,jA,jB;

int main()
{
	int i,j,k;
	cout<<"Menampilkan Array/Larik Multi Dimensi"<<endl;
	cout<<"Menentukan Besar Baris Matrik A"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"Masukkan Jumlah Baris Matrik A = ";cin>>iA;
	cout<<"Masukkan Jumlah Kolom Matrik A = ";cin>>jA;
	cout<<"-------------------------------------"<<endl;
	cout<<"Masukkan Jumlah Baris Matrik B = ";cin>>iB;
	cout<<"Masukkan Jumlah Kolom Matrik B = ";cin>>jB;
	cout<<"-------------------------------------"<<endl;
	cout<<endl;
	cout<<"Menginput Isi Elemen Matrik A"<<endl;
	for(i=0;i<iA;i++)
	{
		for(j=0;j<jA;j++)
		{
			cout<<"Masukkan Isi Elemen ["<<i+1<<"]["<<j+1<<"] : ";
			cin>>A[i][j];
		}
	}
	cout<<endl;
	cout<<"Menginput Isi Elemen Matrik B"<<endl;
	for(i=0;i<iB;i++)
	{
		for(j=0;j<jB;j++)
		{
			cout<<"Masukkan Isi Elemen ["<<i+1<<"]["<<j+1<<"] : ";
			cin>>B[i][j];
		}
	}
	cout<<endl;
	cout<<"Tampilan Isi Elemen Array Matrik A"<<endl;
	cout<<"----------------------------------"<<endl;
	for(i=0;i<iA;i++)
	{
		for(j=0;j<jA;j++)
		cout<<A[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	cout<<"Tampilan Isi Elemen Array Matrik B"<<endl;
	cout<<"----------------------------------"<<endl;
	for(i=0;i<iB;i++)
	{
		for(j=0;j<jB;j++)
		cout<<B[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	//Perkalian Matrik
	for(i=0;i<iA;i++)
		for(j=0;j<jB;j++)
			for(k=0;k<jA;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
	cout<<endl;
	cout<<"Tampilan Isi Dua Matrik"<<endl;
	cout<<"------------------------"<<endl;
	for(i=0;i<iA;i++)
	{
		for(j=0;j<jB;j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	cin.get();
}