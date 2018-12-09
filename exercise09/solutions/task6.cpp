#include <iostream>
using namespace std;


int main(){
	
	int n, maxCol, maxRow, sum;
	int maxSum = 0;

	cin>>n;

	int arr[n][n];


	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			cin>>arr[i][j];
		}
	}

	for(int i = 0; i < n; i++){

		sum = 0;

		for(int j = 0; j < n; j++){

			sum += arr[i][j];
		}

		if(sum > maxSum){
			maxSum = sum;
			maxRow = i;
		}

	}

	cout<<"Max row sum: "<<maxSum<<endl;
	cout<<"Max row index: "<<maxRow<<endl;

	maxSum = 0;


	for(int i = 0; i < n; i++){

		sum = 0;

		for(int j = 0; j < n; j++){


			sum += arr[j][i];
		}

		if(sum > maxSum){
			maxSum = sum;
			maxCol = i;
		}

	}

	cout<<"Max col sum: "<<maxSum<<endl;
	cout<<"Max col index: "<<maxCol<<endl;

	return 0;
}