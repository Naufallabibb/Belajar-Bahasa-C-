#include <iostream>
using namespace std;

float alas;
const int dua = 2; //const untuk mendeklarasikan nilai tetap

int main ()
{
	int tinggi;
	char kode='a';
	char* kalimat_alas="Masukkan Nilai Alas = " ; 
	char kalimat_tinggi[25]="Masukkan Nilai Tinggi = " ;
	cout<<kalimat_alas;
	cin>>alas;
	cout<<kalimat_tinggi;
	cin>>tinggi;
	cout<<"Luas Segitiga Adalah = " <<(alas*tinggi)/dua<<endl;
	system("pause");
	return 0;
}
