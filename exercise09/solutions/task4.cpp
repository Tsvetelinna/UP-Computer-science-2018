#include <iostream>
using namespace std;

bool hasNumOne(int num){

	while(num > 0){

		if(num % 10 == 1){
			return true;
		}
		num /= 10;
	}
    
    return false;
}

int main(){
	
	int n;
	int prod = 1;

	cin>>n;

	int arr[n][n];

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			cin>>arr[i][j];
		}
	}

	for(int i = 0; i < n; i++){

		for(int j = n - i; j < n; j++){

			if(hasNumOne(arr[i][j])){

				prod*=arr[i][j];
			}
			
		}
	}

	cout<<prod;


	return 0;
}