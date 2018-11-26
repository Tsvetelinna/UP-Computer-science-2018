#include <iostream>
using namespace std;


int main(){
	
	int size1, size2;
	bool flag = true;

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

	cout<<"Different numbers"<<endl;

	for(int i = 0; i < size1; i++){

		flag = true;

		for(int j = 0; j < size2; j++){

			if(arr1[i] == arr2[j]){
				
				flag = false;
			}
		}

		if(arr1[i] % 3 != 0 && flag == true){
			cout<<arr1[i]<<endl;
		}
	}

	return 0;
}