#include <iostream>
using namespace std;



int main(){
	
	int size, k, n;

	cin>>size;

	int arr[size];

	for(int i = 0; i < size; i++){

		cin>>arr[i];
	}


	do
    {
    	cout<<"K = ";
        cin>>k;

    }while(k > size);

    cout<<"n = ";
    cin>>n;
    size++;

    for(int i = size -1; i > k; i--){

        arr[i] = arr[i - 1];
    }

  	arr[k] = n;



    for(int i = 0; i < size; i++){

    	cout<<arr[i]<<" ";
    }

    cout<<endl;

	return 0;
}