#include <iostream>

using namespace std;
//prototipe fungsi harus di tempatkan diatas int main()
int hitung_luas(int p, int l){
	return p*l;
}


int main(){
	int panjang, lebar, luas;
	cin >>panjang;
	cin >>lebar;
	luas = hitung_luas(panjang, lebar);
	cout<<luas;
	return 0;
}
