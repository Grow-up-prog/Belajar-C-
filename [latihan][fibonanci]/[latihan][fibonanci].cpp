#include <iostream>
using namespace std;
int main(){
	//program deret fibonanci
	//rumus 
	//f_n=f_n1+f_n2
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	cout<<"program deret fibonanci"<<endl;
	cout<<"masukan nilai ke -n = "<<endl;
	cin>>n;
	f_n1=1;
	f_n2=0;
	f_n=f_n1 + f_n2;
	for(int i=1; i<=n; i++){
		f_n=f_n1 + f_n2;
		cout<<f_n<<"\n"<<endl;
		f_n2=f_n1;
		f_n1=f_n;
	}
}
