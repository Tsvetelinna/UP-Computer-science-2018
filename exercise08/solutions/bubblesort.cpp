#include <iostream>
using namespace std;



int main(){
	
	int size = 5;

	int arr[size] = {22, 4, 55, 9, 12};

	for(int i = 0; i < size; i++){

		cout<<arr[i]<<" ";
	}


	cout<<endl;

	for(int i = 0; i < size - 1; i++){

		for(int j = 0; j < size-1-i; j++){

			if(arr[j] > arr[j+1]){

				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}

	}


	for(int i = 0; i < size; i++){

		cout<<arr[i]<<" ";
	}

	return 0;
}