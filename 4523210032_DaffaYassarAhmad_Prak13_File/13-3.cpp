#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int angka[]={22,7,66};
	ofstream file_keluaran;
	
	file_keluaran.open("Angka.DAT",ios::binary);
	cout<<"Sedang merekam..."<<endl;
	for(int i=0;i<(sizeof(angka)/sizeof(int));i++)
		file_keluaran.write((char *) &angka[i], sizeof(int));
	
	file_keluaran.close();
}