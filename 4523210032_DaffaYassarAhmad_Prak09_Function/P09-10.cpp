#include <iostream>
using namespace std;
#include <cmath>

void Daffa1()
{
	float angka, hasil;
	cout<<"MENGHITUNG AKAR SUATU BILANGAN"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Masukkan Suatu Bilangan Akar = ";cin>>angka;
	cout<<"------------------------------"<<endl;
	hasil=sqrt(angka);
	cout<<"Akar dari "<<angka<<" adalah "<<hasil;
	cout<<endl;
}

void Daffa2()
{
	double angka,hasil,pangkat;
	cout<<"----------------------------------"<<endl;
	cout<<"MENGHITUNG PANGKAT SUATU BILANGAN"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Masukkan Suatu Bilangan = ";cin>>angka;
	cout<<"Masukkan Pangkat Berapa = ";cin>>pangkat;
	hasil=pow(angka,pangkat);
	cout<<"-----------------------------------"<<endl;
	cout<<angka<<" pangkat "<<pangkat<<" adalah "<<hasil;
	cout<<endl;
}

int main()
{
	Daffa1();
	Daffa2();
	return 0;
}