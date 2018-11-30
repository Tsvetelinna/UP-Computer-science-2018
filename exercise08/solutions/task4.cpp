#include <iostream>
using namespace std;


int myStrlen(char str[]){

	int count = 0;

	for(int i = 0; str[i] != '\0'; i++){

		count++;

	}

	return count;
	
}

char* myStrcpy(char first[], char second[]){

	int size2 = myStrlen(second);


	for(int i = 0; i < size2; i++){

		first[i] = second[i];
	}

	return first;
	
}


int main(){

	

	return 0;
}