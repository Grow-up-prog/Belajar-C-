//scope variabel
#include <iostream>
using namespace std;
//global scope
int xGlobal(){
	int x=10;
	return x;	
}
int xLocal(){
	int x=8;
	return x;
}
int main(){
	cout<<"variabel global "<<xGlobal()<<endl;
	cout<<"variabel local main "<<xLocal()<<endl;
	{
		int x =1;
		cout <<"variabel Block"<<x<<endl;
	}
	cout<<"variabel global"<<xGlobal()<<endl;
}
