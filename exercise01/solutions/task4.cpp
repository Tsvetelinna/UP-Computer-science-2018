#include<iostream>
using namespace std;

int main(){
	
	int num;

	cout<<"num = ";
	cin>>num;

	int a = num % 10;
	int b = (num/10) % 10;
	int c = num/100;

	if(a == b){
		cout<<boolalpha<<true;
	}

	else if(a == c){
		cout<<boolalpha<<true;
	}
	else if(b == c){
		cout<<boolalpha<<true;
	}
	else{
		cout<<boolalpha<<false;
	}
	

	return 0;
}