#include <iostream>
using namespace std;

int x,y;
int main(){
	cout<<"========================== \n";
	cout<<"OPERATOR PERBANDINGAN \n";
	cout<<"input x =";
	cin>>x;
	cout<<"input y =";
	cin>>y;
	
	if(x==y){
		cout<<x<<"kedua bilangan sama besar"<<y<<endl;
	} else if(x>y){
		cout<<x<<"lebih besar dari pada"<<y<<endl;
	} else {
		cout<<x<<" lebih kecil dari pada"<<y<<endl;
	}
}
