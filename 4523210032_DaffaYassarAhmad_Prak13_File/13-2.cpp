#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int MAXS=80;
	char penyangga[MAXS+1];
	
	ifstream file_masukan("BIODTKU1.TXT");
	while (file_masukan)
	{
		file_masukan.getline(penyangga,MAXS);
		cout<<penyangga<<endl;
	}
	
	file_masukan.close();
}