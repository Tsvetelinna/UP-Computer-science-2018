#include <iostream>
using namespace std;

bool isCapitalLetter(char c){

	return (c >= 'A' && c <= 'Z');
}

bool isLowerLetter(char c){

	return (c >= 'a' && c <= 'z');
}

bool isDigit(char c){

	return (c >= '0' && c <= '9');
}

int main(){
	
	char c;

	cin>>c;

	if(isCapitalLetter(c)){
		cout<<c<<" is capital letter"<<endl;
	}
	else if(isLowerLetter(c)){
		cout<<c<<" is lower letter"<<endl;
	}
	else if(isDigit(c)){

		cout<<c<<" is digit"<<endl;
	}
	else{
		cout<<c<<" is other symbol"<<endl;
	}

	return 0;
}