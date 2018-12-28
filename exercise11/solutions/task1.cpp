#include <iostream>
using namespace std;

void printBinary(int number){

    if (number >= 2){

        printBinary(number / 2);
    }

    cout << number % 2;
}


int main(){

	return 0;
}