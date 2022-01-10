#include <iostream>
using namespace std;
 int main(){
 	int n;
 	cout <<"membuat segitiga pertambahan"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	
 	for(int i=1; i<=n; i++){
 		for(int k=1;k<=i;k++){
 			cout <<"*";
		 }
 		cout<<""<<endl;
	 }
	cout <<"membuat segitiga pengurangan"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	
 	for(int i=1; i<=n; i++){
 		for(int k=n;k>=i;k--){
 			cout <<"*";
		 }
 		cout<<""<<endl;
	 }
	cout <<"membuat segitiga pola 3"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	
 	for(int i=1; i<=n; i++){
 		for(int k=1;k<=i;k++){
 			cout<<" ";	
		 }	
		 for(int u=n;u>=i;u--){
		 	cout<<"*";;
		 }
		 cout<<""<<endl;
	}
	
	cout <<"membuat segitiga pola 4"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	
 	for(int i=1; i<=n; i++){
 		for(int k=n;k>=i;k--){
 			cout<<" ";	
		 }	
		 for(int u=1;u<=i;u++){
		 	cout<<"*";;
		 }
		 cout<<""<<endl;
	 }	 	
	cout <<"membuat segitiga pola 5"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	
 	for(int i=1; i<=n; i++){
 		for(int k=n;k>=i;k--){
 			cout<<" ";	
		 }	
		 for(int u=1;u<=(2*i)-1;u++){
		 	cout<<"*";
		 }
		 cout<<""<<endl;
	 }
	 	 
  	cout <<"membuat segitiga pola 6"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	
 	for(int i=1; i<=n; i++){
 		for(int k=1;k<=i;k++){
 			cout<<" ";	
		 }	
		 for(int u=n;u>=(2*i)-n;u--){
		 	cout<<"*";;
		 }
		 cout<<""<<endl;
	}
	cout <<"membuat segitiga pola 7"<<endl;
 	cout <<"masukan panjang pola";
 	cin >>n;
 	for(int i=1; i<n; i++){
 		for(int k=n;k>=i;k--){
 			cout<<" ";	
		 }	
		 for(int u=1;u<=(2*i)-1;u++){
		 	cout<<"*";
		 }
		 cout<<""<<endl;
	 }
 	
 	for(int i=1; i<=n; i++){
 		for(int k=1;k<=i;k++){
 			cout<<" ";	
		 }	
		 for(int u=n;u>=(2*i)-n;u--){
		 	cout<<"*";;
		 }
		 cout<<""<<endl;
	} 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
