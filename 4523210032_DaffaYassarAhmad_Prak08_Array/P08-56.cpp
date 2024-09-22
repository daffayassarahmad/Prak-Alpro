#include <iostream>
using namespace std;

int main()
{
	int Nilai[4][4];
	int d,y;
	cout<<"Program Array Bentuk Segitiga 4 Baris 4 Kolom"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
	for(d=0;d<4;d++)
	{
		for(y=0;y<d+1;y++)
		{
		cout<<"Masukkan Isi Elemen ["<<d+1<<"]["<<y+1<<"] : ";
		cin>>Nilai[d][y];
		}
	}
	cout<<endl;
	cout<<"Tampilan Isi Elemen"<<endl;
	cout<<"--------------------"<<endl;
	for(d=0;d<4;d++)
	{
		for(y=0;y<d+1;y++)
			cout<<Nilai[d][y]<<" ";
			cout<<endl;
	}
	cin.get();
}