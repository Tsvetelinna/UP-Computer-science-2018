#include <iostream>
using namespace std;


int main(){
	
	double a;
	double b;

	cin>>a>>b;

	double doubleMax = 2 * (a > b ? a : b);

	cout<<doubleMax<<endl;


	return 0;
}