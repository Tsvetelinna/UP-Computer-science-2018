#include <iostream>
using namespace std;



int main(){
	
	int size, k;

	cin>>size;

	int arr[size];

	for(int i = 0; i < size; i++){

		cin>>arr[i];
	}

	cout<<"K = ";

	do
    {
        cin>>k;

    }while(k > size);

    for(int i = k; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    for(int i = 0; i < size; i++){

    	cout<<arr[i]<<" ";
    }

    cout<<endl;

	return 0;
}