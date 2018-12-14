#include <iostream>
using namespace std;

char* fix(char* text){

    int index = 0;

    for(int j = 0; text[j] != '\0'; j++){

        text[index++] = text[j];

        if(text[j] == ' '){

            while(text[j+1] == ' '){

                j++;
            }
        }
    }

    text[index] = '\0';

    return text;
}

int main(){

    char str[] = "I    love    playing";

    fix(str);

    cout<<str;
    
    return 0;
}
