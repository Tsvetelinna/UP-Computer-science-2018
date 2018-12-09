#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){

	if(num <= 1){

		return false;
	}

	for(int i = 2; i <= sqrt(num); i++){

		if(num % i == 0){
			return false;
		}
	}
    
    return true;
}

int main(){
	
	int n;
	int count = 0;

	cin>>n;

	int arr[n][n];


	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			cin>>arr[i][j];
		}
	}

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n - i - 1; j++){

			if(isPrime(arr[i][j])){
				count++;
			}
			
		}
	}

	cout<<count;


	return 0;
}