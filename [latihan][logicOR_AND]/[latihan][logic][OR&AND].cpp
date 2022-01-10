#include <iostream>
using namespace std;
int x,y;

int main(){
	cout<<"=========================== \n";
	cout<<"PROGRAM PERBANDINGAN OR & AND \n";
	cout<<"=========================== \n";
	cout<<"input nilai x=";
	cin>>x;
	cout<<"input nilai y=";
	cin>>y;
	cout<<"=========================== \n";
	cout<<"logika AND \n";
	cout<<(x>=0 and y<=10)<<"\n"<<endl;
	
	cout<<"logika OR \n";
	cout<<(x<=5 or y>=6)<<"\n"<<endl;
	
	cout<<"logika XOR \n";
	cout<<(x<=5^y>=6);

	cout<<"logika NOT \n";
	cout<<!(x==2);
}
