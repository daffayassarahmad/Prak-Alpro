#include <iostream>
using namespace std;

int main()
{
	int N,P;
	cout<<endl;
	cout<<"Masukkan Nilai Bilangan Pembagi (N) = ";cin>>N;
	cout<<"Masukkan Nilai Bilangan Pembagi (P) = ";cin>>P;
	cout<<endl;
	if (N%P == 0)
		cout<<"Jawabanya adalah BENAR"<<endl;
	else
		cout<<"Jawabanya adalah SALAH"<<endl;
	cout<<endl;
	cin.get();
}