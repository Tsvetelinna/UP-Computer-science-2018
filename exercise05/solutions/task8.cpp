#include <iostream>
using namespace std;


int main(){


    int size;
    cin >> size;

    int arr[size];

    bool flagUP = true;
    bool flagDown = true;

    for(int i = 0; i < size; i++){

        cin >> arr[i];
    }
 
   for(int i = 0; i < size-1; i++){

        if(arr[i] > arr[i + 1]){

            flagUP = false;
            break;
        }
    }

    if(flagUP == true){
    	cout<<"Increasing"<<endl;
    }

    else{

  		for(int i = 0; i < size-1; i++){

       		if(arr[i + 1] > arr[i]){

            	flagDown = false;
            	break;
       		}
    	}
    
     	if(flagDown == true){

    		cout<<"Decreasing"<<endl;
    	}
    	else{

    		cout<<"Not increasing, not decreasing"<<endl;
    	}

    }
  
    return 0;
}