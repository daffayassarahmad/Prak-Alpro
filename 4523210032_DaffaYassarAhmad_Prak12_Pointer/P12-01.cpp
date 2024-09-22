#include <iostream>
using namespace std;

int main()
{
	int d;
	int *tgllahir, tgl[3]={16,11,2003};
	for(d=0;d<3;d++)
	{
		tgllahir=&tgl[d];
		cout<<" "<<*tgllahir<<endl;
	}
	return 0;
}