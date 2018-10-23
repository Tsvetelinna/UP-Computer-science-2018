#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char symbol;

    cin>>a>>b;
    cin>>symbol;


    switch(symbol){
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
        case '%': cout<<a%b<<endl;
        break;
        default: cout<<"It`s not math symbol!"<<endl;
    }
  
}