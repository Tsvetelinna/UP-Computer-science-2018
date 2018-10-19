#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	double a, b, c;

	cin>>a>>b>>c;

	cout<<"a) "<< a - b + pow(b, 2)*pow(a, 3) - pow(c, 3)<<endl;
	cout<<"b) "<< a*sqrt(b) - sqrt(pow(b, 3))*sqrt(c)<<endl;
	cout<<"c) "<< fabs(pow(c, 3) - pow(a, 3)*pow(b, 2)) + exp(2)<<endl;
	cout<<"d) "<< cos(180/6)*c + tan(180/4)*log10(a)<<endl;


	return 0;
}