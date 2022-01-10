#include <iostream>
using namespace std;
//overloading fungsi

//fungsi umum
int luasKotak (int panjang, int lebar){
	int luas = panjang*lebar;
	return luas;
}
//overload fungsi
int luasKotak (int panjang){
 	int luas = panjang*panjang;
 	return luas;
}
//overload fungsi pecahan
double luasKotak (double panjang){
 	double luas = panjang*panjang;
 	return luas;
}

int main (){
	cout <<"luas kotak default adalah = "<<luasKotak(5,5)<<endl;
	cout <<"luas kotak overloading adalah = "<<luasKotak(7)<<endl;
	cout <<"luas kotak overloading adalah = "<<luasKotak(7.5)<<endl;	
}
