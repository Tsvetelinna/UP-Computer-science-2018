#include <iostream>
using namespace std;



int main(){
	
	int size;

	cin>>size;

	int arr[size];

	for(int i = 0; i < size; i++){

		cin>>arr[i];
	}

	for(int i = 0; i < size/2 ; i++){

        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }


    cout<<"Reversed array:"<<endl;

    for(int i = 0; i < size; i++){

    	cout<<arr[i]<<" ";
    }

    cout<<endl;

	return 0;
}