#include<iostream>
using namespace std;

int main(){
	
	int num;

	cout<<"num = ";
	cin>>num;

	int a = num % 10;
	int b = (num/10) % 10;
	int c = num/100;

	if(a == c){
		cout<<"The number is palindrome"<<endl;
	}

	else{
		cout<<"The number isn`t palindrome"<<endl;
	}
	

	return 0;
}