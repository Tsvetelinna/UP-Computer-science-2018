#include <iostream>
using namespace std;

int main()
{
    
    int num;
    int sum = 0;

    cin>>num;

    for(int i = 1; i <= num-1; i++)
    {
        if(num%i == 0){
            sum += i;
        }
    }
  
  if(num == sum){

    cout<<"The number is perfect"<<endl;
  }
  else{
    cout<<"The number isn't perfect"<<endl;
  }
}