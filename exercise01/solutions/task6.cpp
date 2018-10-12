#include<iostream>
using namespace std;

int main(){
	
	int num;

	cout<<"num = ";
	cin>>num;

	int a = num % 10;
	int b = (num/10) % 10;
	int c = num/100;

	cout<<c<<endl;
	cout<<b<<endl;
	cout<<a<<endl;

	int sum = a + b + c;

	cout<<"Sum is:"<<sum<<endl;
	

	return 0;
}