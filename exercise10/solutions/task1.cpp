#include <iostream>
using namespace std;


int main(){

   
    int symbols[255];

    for(int i = 0; i < 255; ++i){

        symbols[i] = 0;
    }

  
    int MAX_SIZE = 50;
    char text[MAX_SIZE];
    char ch;
    int idx = 0;

     //въвеждането спира при знак !

    do{

        cin >> ch;
        text[idx++] = ch;

    } while(ch != '!');



    for(int i = 0; text[i] != '!'; i++){

        for(int j = 0; j < 255; j++){

            if((int)text[i] == j){

                symbols[j]++;
            }
        }
    }


    // извеждане на резултатите
    for(int i = 0; i < 255; i++){

        if(symbols[i] != 0){

            cout<<(char)i<<"   "<<symbols[i]<< endl;
        }
       
    }

    return 0;
}
