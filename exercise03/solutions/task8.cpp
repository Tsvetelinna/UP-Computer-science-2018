#include <iostream>
#include <cmath>
using namespace std;

int fact(int num){

    int fact = 1;

    for(int i = 2; i <= num; i++){

        fact*=i;
    }

    return fact;
}

int main()
{
    
    int x, n;

    cin>>x>>n;

    double res = 1;

    for(int i = 1; i <= n; i++){

        res += (pow(x, i)/fact(i));
    }
  cout<<res<<endl;
}