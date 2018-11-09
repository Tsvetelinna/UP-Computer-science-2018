#include <iostream>
using namespace std;


int main(){

  	int num, copy;

  	cin>>num;
  	copy = num;

  	while(num > 0){
  		

  		while (copy != 1){
  			if(copy % 3 == 0){
  				copy /=3;
  			}

  			else{
  				break;
  			}
  		}

  		if(copy == 1){
  			cout<<"YES"<<endl;
  		}
  		else{
  			cout<<"NO"<<endl;
  		}

  		cin>>num;
  		copy = num;

  	}

  
    return 0;
}