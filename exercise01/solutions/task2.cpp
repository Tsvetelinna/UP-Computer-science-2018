#include<iostream>
using namespace std;

int main(){
	
	int num1;
	int num2;
	int num3;

	cin>>num1;
	cin>>num2;
	cin>>num3;

	if(num1 > num2 && num1 > num3){
		cout<<num1<<endl;
	}

	if(num2 > num1 && num2 > num3){
		cout<<num2<<endl;
	}

	if(num3 > num1 && num3 > num2){
		cout<<num3<<endl;
	}
	

	return 0;
}