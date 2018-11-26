#include <iostream>
using namespace std;


int main(){


    int size;
    cin >> size;
    int arr[size];
    bool flag = true;

    for(int i = 0; i < size; i++){

        cin >> arr[i];
    }

    for(int i = 0; i < size/2; i++){

        if(arr[i] != arr[size - i - 1]){

            flag = false;
            break;
        }



    }
    
    if(flag){

        cout << "YES" << endl;
    }

    else{

        cout << "NO" << endl;
    }

    return 0;
}
