#include <iostream>
#include <cmath>
using namespace std;

bool helper(int num, int i){

	if(num < 2){

		return false;
	}


	if(i > sqrt(num)){

		return true;
	}

	if(num % i == 0){

		return false;
	}

	
	return helper(num, i+1);
	
}


bool isPrime(int num){

	 return helper(num, 2);
}

int main(){
	

	return 0;
}
