#include <iostream>
using namespace std;


int main(){
	
	int size1, size2;

	cout<<"Size 1:"<<endl;
	cin>>size1;

	cout<<"Array 1:"<<endl;
	int arr1[size1];

	for(int i = 0; i < size1; i++){

		cin>>arr1[i];
	}

	cout<<"Size 2:"<<endl;
	cin>>size2;

	cout<<"Array 2:"<<endl;
	int arr2[size1];

	for(int i = 0; i < size2; i++){

		cin>>arr2[i];
	}

	cout<<"Same numbers"<<endl;

	for(int i = 0; i < size1; i++){
		for(int j = 0; j < size2; j++){

			if(arr1[i] == arr2[j]){
				cout<<arr1[i]<<endl;
				break;
			}
		}
	}
	return 0;
}