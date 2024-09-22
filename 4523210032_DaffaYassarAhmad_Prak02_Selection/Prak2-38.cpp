#include <iostream>
using namespace std;

int main()
{
	int tinggi;
	cout<<"Mengkategorikan Tinggi Seseorang"<<endl;
	cout<<"==============================="<<endl;
	cout<<endl;
	cout<<"Masukkan Tinggi Seseorang = ";cin>>tinggi;
	if (tinggi>170)
		cout<<"Manusisa Melar"<<endl;
	else
		cout<<"Manusia Semampai"<<endl;
	cin.get();
}