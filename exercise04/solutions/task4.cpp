#include <iostream>
#include <cmath>
using namespace std;


 int main(){

    int num;
    cin>>num;
    int counter = 0, copyN = num;
    double result = 0;

    while(copyN){

        counter++;
        copyN /= 10;
    }
    
    copyN = num;

   while (copyN){

        result = result + pow(copyN % 10, counter);
        copyN /= 10;
    }


    (result == num) ? cout<<"Narcissistic number\n" : cout<<"Not a narcissistic number\n";

    return 0;
}