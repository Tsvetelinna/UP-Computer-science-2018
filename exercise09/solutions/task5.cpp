#include <iostream>
using namespace std;


int main(){
	
	int n;

	cin>>n;

	int arr[n][n];

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			cin>>arr[i][j];
		}
	}

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			if(i + j == n - 1){

				arr[i][j] *= arr[i][j];
			}
			
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}



	return 0;
}