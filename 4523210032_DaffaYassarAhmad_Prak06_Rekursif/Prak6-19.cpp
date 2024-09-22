#include <iostream>
#include <conio.h>
using namespace std;

void MenaraHanoi (int N,char asal,char bantu,char tujuan);
int main()
{
	int kepingan;
	cout<<"PROGRAM MENARA HANOI"<<endl;
	cout<<"--------------------"<<endl;
	cout<<endl;
	kepingan = 3;
	MenaraHanoi(kepingan,'A','B','C');
	return 0;
}

void MenaraHanoi (int N,char asal,char bantu,char tujuan)
{
	if(N == 1)
		cout<<"Kepingan 1 dari "<<asal<<" ke "<<tujuan<<endl;
	else
	{
		MenaraHanoi (N-1,asal,tujuan,bantu);
		cout<<"Kepingan "<<N<<" dari "<<asal<<" ke "<<tujuan<<endl;
		MenaraHanoi(N-1,bantu,asal,tujuan);
	}
}