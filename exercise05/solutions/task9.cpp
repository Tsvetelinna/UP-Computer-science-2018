#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int i, j;
    int n;
    cin>>n;

    for(i = 1; i <= n; i++){

        cout<<setw(2*i-1)<<' ';

        for(j = i; j < n; j++){

            cout<<j<<" ";
        }

        for(j = n; j >= i; j--){

            cout<<j<<" ";
        }

        cout<<endl;
    }

    for(i = n-1; i >= 1; i--){

        cout<<setw(2*i-1)<<' ';

        for(j = i; j < n; j++){

            cout<<j<<" ";
        }

        for(j = n; j >= i; j--){

            cout<<j<<" ";
        }

        cout<<endl;
    }
  
    return 0;
}