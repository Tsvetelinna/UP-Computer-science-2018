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


	cout<<"under main diagonal"<<endl;


	for(int i = 0; i < n; i++){

		for(int j = 0; j < i; j++){

				cout<<arr[i][j]<<" ";	
		}

		cout<<endl;
	}

	cout<<"over main diagonal"<<endl;

	for(int i = 0; i < n; i++){

		for(int j = i + 1; j < n; j++){

				cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}


	cout<<"under secondary diagonal"<<endl;

	for(int i = 0; i < n; i++){

		for(int j = size - i; j < n; j++){

					cout<<arr[i][j]<<" ";

		}

		cout<<endl;
	}

	cout<<"over secondary diagonal"<<endl;

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n - 1 - i; j++){

				cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}



	return 0;
}