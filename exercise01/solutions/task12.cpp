#include<iostream>
using namespace std;

int main(){
	
	int num;

	cin>>num;

	if(num < 1999 || num > 7999){
		cout<<"The number must be between 1999 and 7999.";
	}

	else{

		if(num % 2 == 0 && num % 5 == 0){
			cout<<boolalpha<<true;
		}

		else{
			cout<<boolalpha<<false;
		}

	}
	

	return 0;
}