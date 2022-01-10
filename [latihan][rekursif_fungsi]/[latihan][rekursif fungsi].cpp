#include <iostream>
using namespace std;

//fungsi rekursif terbatas
double pangkatIterasi(double a, double b){
	double hasil = a;
	for (int i = 1; i < b ; i++){
		hasil=hasil*a;
	}
	return hasil;
}

int pangkatRekursif()

//fungsi rekursif adalah fungsi yang memanggil dirinya sendiri di dalam fungsi
int main(){
	int a,b;
	cout <<"masukan nilai a = "<<endl;
	cin >> a;
	cout <<"masukan nilai b = "<<endl;
	cin >> b;
	cout<<pangkat(a,b)<<endl;
}
