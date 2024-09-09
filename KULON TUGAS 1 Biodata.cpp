#include <iostream>
#include <string>

using namespace std;

int main(){
	string nama,ttl,alamat,nim,prodi,kelas,universitas ;
	
	cout<<"Masukan Data Berikut :" <<endl<<endl;
	cout<<"Nama        : ";
	getline (cin,nama);
	
	cout<<"Ttl         : ";
	getline (cin,ttl);
	
	cout<<"Alamat      : ";
	getline (cin,alamat);
	
	cout<<"Nim         : ";
	getline (cin,nim);
	
	cout<<"Prodi       : ";
	getline (cin,prodi);
	
	cout<<"Kelas       : ";
	getline (cin,kelas);
	
	cout<<"Universitas : ";
	getline (cin,universitas);
	
	cout<<endl;
	cout<<"Biodata Mahasiswa"<<endl;
	cout<<"-----------------------------" <<endl;
	
	cout<<"Nama        : " <<nama<<endl; 
	cout<<"Ttl         : " <<ttl<<endl; 
	cout<<"Alamat      : " <<alamat<<endl; 
	cout<<"Nim         : " <<nim<<endl; 
	cout<<"Prodi       : " <<prodi<<endl; 
	cout<<"Kelas       : " <<kelas<<endl; 
	cout<<"Universitas : " <<universitas<<endl; 
	
}

