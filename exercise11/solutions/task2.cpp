#include <iostream>
using namespace std;

double helper(double x, double y, int i, int n){

    if(i > n){

        return y;
    }

    return helper(x, y*x+i, i+1, n);
}


double sum(double x, int n){

    return helper(x, 1, 2, n);
}


int main(){

    int x, n;
    
    cin>>x;
    cin>>n;

    cout<<sum(x, n)<<endl;

    return 0;
}
