#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	double x;

	cin>>x;

	if(x >= 1){

		cout<<"y = "<<pow(x, 2) + 7*x + 3.45<<endl;
	}
	else{

		if(x <= 0){
			cout<<"Invalid x"<<endl;
		}
		else{

			cout<<"y = "<<log10(x) + 1.82<<endl; 
		}
		
	}

	return 0;
}