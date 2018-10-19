#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	double x;

	cin >> x;

	int i = floor(x*10);
	int b = i%10;

	cout<<"x = "<<x<<endl;
	cout<<"b = "<<b<<endl;


	return 0;
}