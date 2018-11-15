#include <iostream>
using namespace std;

bool isCapitalLetter(char c){

	return (c >= 'A' && c <= 'Z');
}

int main(){
	
	char c;

	cin>>c;

	if(isCapitalLetter(c)){
		cout<<c<<" with ASCII code: "<<(int) c<<endl;
	}
	else{
		char toCapital = c - 'a' + 'A';

		cout<<toCapital<<" with ASCII code: "<<(int) toCapital<<endl;
	}

	return 0;
}