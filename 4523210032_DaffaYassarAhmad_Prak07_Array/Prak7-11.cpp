#include <iostream>
using namespace std;

int main()
{
	const int JumDt= 311;
	int nilai[JumDt];
	int d;
	cout<<"Menampilkan Bilangan Pangkat 31-310"<<endl;
	cout<<"-----------------------------------"<<endl;
	for (d=31;d<JumDt;d++)
	{
		nilai[d]=d*d;
		cout<<"Bilangan Pangkat "<<d<<" = "<<nilai[d]<<endl;

	}
	cout<<endl;
	cin.get();
}