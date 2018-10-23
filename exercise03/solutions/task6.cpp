

#include <iostream>

using namespace std;

int main()
{
    
    int num;
    int sum = 0;
    int counter = 0;
    int average = 1;

    cin>>num;


    while(num != 0){

        sum+=num;
        cin>>num;
        counter++;
        
    }

    
    average = sum/counter;

    cout<<average<<endl;
    
  
}
