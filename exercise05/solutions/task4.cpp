#include <iostream>
using namespace std;


int main(){

  	int n, x;
  	int maxZero = -1;
  	int max = 0;

  	cin>>n;

  	for(int i = 1; i <= n; i++)
    {
        cin>>x;
        int copy = x;
        int counter = 0;
        while(copy != 0)
        {
            if(copy%10 == 0)
            {
                counter++;
            }
            copy /= 10;
        }
        if(counter > maxZero)
        {
            max = x;
            maxZero = counter;
        }
    }

    if(maxZero == 0){

    	cout<<"Thete is no number with a zero"<<endl;
    }

    else{

    	cout<<max<<" has "<<maxZero<<" zeros"<<endl;
    }
  	

  
    return 0;
}