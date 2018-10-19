#include <iostream>
using namespace std;


int main(){
	
	double a;
	double b;

	cin>>a>>b;

	if(a != 0){

		cout << "x = " << -b / a << endl;
	}

	else if( b != 0){

		cout << "No solution" << endl;
	}

	else{

		cout <<"Every number is a solution"<< endl;
	}


	return 0;
}