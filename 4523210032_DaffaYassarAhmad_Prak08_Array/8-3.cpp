#include <iostream>
using namespace std;

int main()
{
	int Nilai[4][4];
	int i,j;
	cout<<"Menampilkan Array/Larik 2 Dimensi"<<endl;
	cout<<"Dengan Ordo 4x4 Menggunakan Inputan"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i+1;j++)
		{
		cout<<"Masukkan Isi Elemen ["<<i+1<<"]["<<j+1<<"] : ";
		cin>>Nilai[i][j];
		}
	}
	cout<<endl;
	cout<<"Tampilan Isi Elemen"<<endl;
	cout<<"--------------------"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i+1;j++)
			cout<<Nilai[i][j]<<" ";
			cout<<endl;
	}
	cin.get();
}