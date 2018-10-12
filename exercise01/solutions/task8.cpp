#include<iostream>
using namespace std;

int main(){
	
	int num;

	cin>>num;

	if(num < 2211 || num > 8999){
		cout<<"The number must be between 2211 and 8999.";
	}

	else{

		int m;
		cin>>m;
		int counter = 0;
		int a, b, c, d;

		a = num % 10;
		b = (num/10) % 10;
		c = (num/100) % 10;
		d = num/1000;

		if(a == m){
			counter++;
		}

		if(b == m){
			counter++;
		}

		if(c == m){
			counter++;
		}

		if(d == m){
			counter++;
		}

		cout<<counter;

	}
	

	return 0;
}