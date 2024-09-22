#include <iostream>
using namespace std;

int main()
{
    int angka;
    angka = 1;
    cout<<"Menampilkan Angka 1-20 Secara Beruntun"<<endl;
    cout<<"======================================"<<endl;
    while (angka <= 20)
    {
        cout<<"Angka "<<angka<<endl;
        angka++;
    }
    cin.get();
}