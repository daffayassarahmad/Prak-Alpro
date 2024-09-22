#include <iostream>
using namespace std;

int main()
{
	const int JumDt=3;
	int Nilai[JumDt] = {22,7,1966};
	int i, Total = 0;
	cout<<"Menampilkan Array/Larik 1 Dimensi"<<endl;
	cout<<"---------------------------------"<<endl;
	for (i=0;i<JumDt;i++)
	{
		cout<<"Isi Elemen Ke- "<<i+1<<" : "<<Nilai[i]<<endl;
		Total=Total+Nilai[i];
	}
	cout<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Total dari Penjumlahan = "<<Total<<endl;
	cin.get();
}