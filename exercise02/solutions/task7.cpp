#include <iostream>
using namespace std;


int main(){
	
	int n;
	int fact = 1;

	cin>>n;

	for(int i = 1; i <= n; i++){

		fact*=i;
	}

	cout<<n<<"! = "<<fact<<endl;

	return 0;
}