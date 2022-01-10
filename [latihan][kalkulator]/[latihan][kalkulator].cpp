#include <iostream>
using namespace std;
int o, hasil,i,u,j;
int main(){
	cout <<"SELAMAT DATANG DI PROGRAM CALCULATOR \n";
	cout <<"masukan nilai pertama \n";
	cin >>i;
	cout <<"masukan nilai kedua \n";
	cin >>u;
	cout <<"CASE : \n";
	cout<<"======================= \n";
	cout<<"1. pertambahan \n";
	cout<<"2. pengurangan \n";
	cout<<"3. perkalian \n";
	cout<<"4. pembagian \n";
	cout<<"======================= \n";
	cout<<"masukan pilihan =";
	cin >>o;
	
	switch(o){
		case 1:
			hasil=i+u;
			cout<<i<<"+"<<u<<"="<<hasil<<endl;
			break;
		case 2:
			hasil=i-u;
			cout<<i<<"-"<<u<<"="<<hasil<<endl;
			break;
		case 3:
			hasil=i*u;
			cout<<i<<"x"<<u<<"="<<hasil<<endl;
			break;
		case 4:
			hasil=i/u;
			cout<<i<<"/"<<u<<"="<<hasil<<endl;
			break;
	}
}
