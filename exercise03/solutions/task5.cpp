

#include <iostream>

using namespace std;

int main()
{
    
    int num;
    int prod = 1;

    cin>>num;

    while(num != 0){

        prod*=num;
        cin>>num;
        
    }

    cout<<prod<<endl;

    
  
}
