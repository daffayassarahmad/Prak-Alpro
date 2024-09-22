#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream file_keluaran;
	
	file_keluaran.open("NILAI1.TXT");
	cout<<"Sedang merekam..."<<endl;
	file_keluaran<<"Nilai -> A  : 85-100"<<endl;
	file_keluaran<<"Nilai -> A- : 80-85"<<endl;
	file_keluaran<<"Nilai -> B+ : 76-80"<<endl;
	file_keluaran<<"Nilai -> B  : 72-76"<<endl;
	file_keluaran<<"Nilai -> B- : 68-72"<<endl;
	file_keluaran<<"Nilai -> C+ : 64-68"<<endl;
	file_keluaran<<"Nilai -> C  : 45-56"<<endl;
	file_keluaran<<"Nilai -> D  : 45-56"<<endl;
	file_keluaran<<"Nilai -> E  : 30-45"<<endl;
	
	file_keluaran.close();
	
	
	const int MAXS=80;
	char penyangga[MAXS+1];
	
	ifstream file_masukan("NILAI1.TXT");
	while (file_masukan)
	{
		file_masukan.getline(penyangga,MAXS);
		cout<<penyangga<<endl;
	}
	
	file_masukan.close();
}