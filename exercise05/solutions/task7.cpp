#include <iostream>
using namespace std;


int main(){


    int size, temp, k;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){

        cin >> arr[i];
    }

    cout<<"k = ";
    cin>>k;

    if(arr[size - 1] == k){

        size--;
    }

    else{

        for(int i = 0; i < size; i++){

            if(arr[i] == k){

                for(int j = i; j < size-1; j++){

                    arr[j] = arr[j+1];
                }

                size--;
                i--;
            }
        }
    }

    for(int i = 0; i < size; i++){

        cout << arr[i] << " ";
    }
    cout << endl;

  
    return 0;
}