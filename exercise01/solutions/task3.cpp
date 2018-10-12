#include<iostream>
using namespace std;

int main(){
	
	int n;
	int m;

	cout<<"n = ";
	cin>>n;
	cout<<"m = ";
	cin>>m;

	int a = n % 10;
	int b = (n/10) % 10;
	int c = n/100;

	if(a == m || b == m || c == m){
		cout<<boolalpha<<true;
	}

	else{
		cout<<boolalpha<<false;
	}
	

	return 0;
}