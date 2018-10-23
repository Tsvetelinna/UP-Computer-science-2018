#include <iostream>
using namespace std;

int main()
{
    
    int digit;

    cin>>digit;

    switch(digit){
        case 0:
        case 2:
        case 4:
        case 6:
        case 8: cout<<"Digit is even"<<endl;
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9: cout<<"Digit is odd"<<endl;
        break;
        default: cout<<"It`s not digit!"<<endl;
    }
  
}