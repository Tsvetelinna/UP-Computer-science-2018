#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	const double PI = 3.14;

	double r;

	cin>>r;

	double p = 2 * PI * r;
	double s = PI * r * r;
	cout<<"P = "<<p<<endl;
	cout<<"S = "<<s<<endl;


	return 0;
}