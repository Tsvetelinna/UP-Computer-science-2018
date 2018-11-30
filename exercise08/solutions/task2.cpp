#include <iostream>
using namespace std;

char toAlpha(char symbol){


	symbol = symbol - 'a' + 'A';
	

	return symbol;
}

int main(){

	int max = 20;

	char str[max];

	int size;

	cout<<"Size:";

	cin>>size;

	for(int i = 0; i < size; i++){

		cin>>str[i];
	}

	for(int i = 0; i < size; i++){

		if(str[i] >= 'a' && str[i] <= 'z'){

			str[i] = toAlpha(str[i]);
		}


		cout<<str[i];
	}


	return 0;

}