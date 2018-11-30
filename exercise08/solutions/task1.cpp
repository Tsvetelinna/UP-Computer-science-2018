#include <iostream>
using namespace std;

int main(){
	
	int size1, size2;
	int count = 0;

	cout<<"Size 1: ";

	cin>>size1;

	int arr1[size1];

	cout<<"Array 1: ";

	for (int i = 0; i < size1; i++){

		cin>>arr1[i];
	}


	cout<<"Size 2: ";

	cin>>size2;

	int arr2[size2];

	cout<<"Array 2: ";

	for (int i = 0; i < size2; i++){

		cin>>arr2[i];
	}


	if( size1 <= size2){


		for(int i = 0; i <= size2 - size1; i++){

			int j = 0;

			while(arr1[j] == arr2[j+i] && j < size1 - 1){

				j++;
			}


			if(arr1[j] == arr2[j+i]){

				count++;
			}
		}

		cout<<count<<endl;
	}

	else{

		cout<<"Size1 > Size2"<<endl;
	}


	return 0;
}