#include <iostream>
using namespace std;


 int main(){

    int num, num2 = 0, counter = 1, num8 = 0, copyOfNum;

    cin >> num;

    copyOfNum = num;

    while(num != 0){

        num2 = num2 + (num % 2 )*counter;
        counter *= 10; 
        num = num / 2; 
    }

    cout << copyOfNum << "(10) = " << num2 << "(2)";

    counter = 1;

    while(copyOfNum != 0){

        num8 = num8 + (copyOfNum % 8)*counter;
        counter *= 10; 
        copyOfNum = copyOfNum / 8; 
    }
    cout  << " = " << num8 << "(8)" << endl;
    
    return 0;
}