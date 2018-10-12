#include<iostream>
using namespace std;

int main(){
	
	int a, b;
	int P, S;

	cout<<"a = ";
	cin>>a;

	cout<<"b = ";
	cin>>b;

	if(a == b){
		cout<<"It`s square"<<endl;
		P = 4*a;
		S = a*a;

	}
	else{
		P = 2*(a + b);
		S = a*b;
	}

	cout<<"P = "<<P<<endl;
	cout<<"S = "<<S<<endl;
	

	return 0;
}