#include <iostream>
using namespace std;
//fungsi prototipe
double volumeKubus(double p=1, double l=1, double t=1);

int main(){
	cout <<"volume kubus adalah =  "<<volumeKubus(2,3,4)<<endl;
	cout <<"volume kubus dengan input a + b = "<<volumeKubus(5,6)<<endl;
	cout <<"volume kubus no input =  "<<volumeKubus()<<endl;
}

double volumeKubus(double p,double l, double t){
	return p*l*t;
}
