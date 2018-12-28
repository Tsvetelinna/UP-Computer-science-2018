#include <iostream>
using namespace std;

int helper(int start, int n, int k){

    if(start > n){

    	return 0;
    }

    if(n - start < k){

        return start;
    }

    return start + helper(start + k, n, k);
}


int sum(int n, int k){

   return helper(1, n, k);
}


int main(){

	int n, k;

	cin>>n;
	cin>>k;

    cout << sum(n, k) << endl;

    return 0;
}