#include <iostream>
using namespace std;

int main()
{
    
    int num;

    cin>>num;

    for(int i = 2; i <= num-1; i++)
    {
        if(num%i == 0){
            cout<<i<<endl;
        }
    }
  
}