

#include <iostream>

using namespace std;

int main()
{
    
    int num;
    cin>>num;

   int counter = 0;

    while(num > 0){

        num/=10;
        counter++;
        
    }

    cout<<counter<<endl;

    
  
}
