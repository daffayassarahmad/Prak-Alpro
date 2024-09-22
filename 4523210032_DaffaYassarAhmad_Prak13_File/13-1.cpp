#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream file_keluaran;
	
	file_keluaran.open("BIODTKU1.TXT");
	cout<<"Sedang merekam...."<<endl;
	file_keluaran<<" Nama: Daffa Yassar Ahmad "<<endl;
	file_keluaran<<" Alamat: JL. Jaha"<<endl;
	file_keluaran<<" NPM: 4523210032"<<endl;
	file_keluaran<<" JK: Laki-laki "<<endl;
	file_keluaran<<" Thn Masuk: 2023"<<endl;
	
	file_keluaran.close();
	
}