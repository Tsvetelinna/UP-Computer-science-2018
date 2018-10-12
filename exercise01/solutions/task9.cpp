#include<iostream>
using namespace std;

int main(){
	
	int num;

	cout<<"num = ";
	cin>>num;

	int a = num % 10;
	int b = (num/10) % 10;
	int c = num/100;

	if(c < b && b < a){
		cout<<num;
	}

	else if(c < a && a < b){
		cout<<c<<a<<b;
	}

	else if(b < c && c < a){
		cout<<b<<c<<a;
	}

	else if(b < a && a < c){
		cout<<b<<a<<c;
	}

	else if(a < b && b < c){
		cout<<a<<b<<c;

	}
	else{
		cout<<a<<c<<b;
	}
	

	return 0;
}