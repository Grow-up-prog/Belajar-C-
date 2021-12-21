#include <iostream>
using namespace std;
//mencari luar dan keliling bangun datar
//persegi panjang
char a,b,c,d;
int i;
int Lpersegi,Pp, Lp;//Luas persegi
int LpersegiPanjang,Ppp, Lpp;//Luas persegiPanjang
float Llingkaran,r;//Luas Lingkaran
float LsegiTiga,Sa,St;//Luas persegi

int persegi(){
	cout<<"masukan sisi= ";
	cin>>Pp;
	cout<<"maka Luas Persegi =";
	Lpersegi = Pp * Pp; 
	cout<<Lpersegi;
}

int persegiPanjang(){
	cout<<"masukan panjang= ";
	cin>>Ppp;
	cout<<"masukan lebar= ";
	cin>>Lpp;
	cout<<"maka Luas Persegi Panjang =";
	LpersegiPanjang = Ppp * Lpp; 
	cout<<LpersegiPanjang;
}

int lingkaran(){
	cout<<"masukan jari-jari = ";
	cin>>r;
	cout<<"maka Luas Lingkaran =";
	Llingkaran = 3.14 * r * r; 
	cout<<Llingkaran;
}

int segiTiga(){
	cout<<"masukan alas = ";
	cin>>Sa;
	cout<<"masukan tinggi= ";
	cin>>St;
	cout<<"maka Luas Persegi =";
	LsegiTiga = 0.5*Sa*St; 
	cout<<LsegiTiga;
}

int main(){
	cout<<"Mencari Luas & keliling bangun datar \n";
	cout<<"pilih bangun datar: \n";
	cout<<"======================= \n";
	cout<<"1. persegi panjang \n";
	cout<<"2. lingkaran \n";
	cout<<"3. persegi \n";
	cout<<"4. segi tiga \n";
	cout<<"======================= \n";
	cout<<"masukan pilihan =";
	cin>>i;
	
	switch (i){
		case 1 : persegiPanjang();break;
		
		case 2 : lingkaran();break;
	
		case 3 : persegi();break;
		
		case 4 : segiTiga();break;
		
		default : cout <<"chanel tidak tersedia";
	}
}

