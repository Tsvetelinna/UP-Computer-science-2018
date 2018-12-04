#include <iostream>
using namespace std;



int main(){
	
	int size = 5;

	int arr[size] = {22, 4, 55, 9, 12};

	for(int i = 0; i < size; i++){

		cout<<arr[i]<<" ";
	}


	cout<<endl;

	int min, temp;

	for(int i = 0; i < size - 1; i++){

		min = i;

		for(int j = i+1; j < size; j++){

			if(arr[j] < arr[min]){

				min = j;
			}
		}

		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;

	}


	for(int i = 0; i < size; i++){

		cout<<arr[i]<<" ";
	}

	return 0;
}