#include <iostream>
using namespace std;

void printNewWord(char* str1, char* str2, int size1, int size2, int magic){

	if(size1 < size2){

		cout<<"Length = "<<size2<<endl;

		for(int i = 0; i < magic; i++){

			cout<<str1[i];
		}

		for(int i = magic; i < size2; i++){

			cout<<str2[i];
		}
	}
	
	else if(size1 > size2){

		cout<<"Length = "<<size1<<endl;

		for(int i = 0; i < magic; i++){

			cout<<str2[i];
		}

		for(int i = magic; i < size1; i++){

			cout<<str1[i];
		}
	}

	else{

		cout << "The words are with equal number of  letter" << endl;
	}
}

int main(){


	int MAX_SIZE = 50;
    int size1;
    int size2;
    char word1[MAX_SIZE];
    char word2[MAX_SIZE];

   cout<<"Size 1: ";
   cin>>size1;

   cout<<"First word: "<<endl;

   for(int i = 0; i < size1; i++){

   		cin>>word1[i];
   }

	cout<<"Size 2: ";
   	cin>>size2;

   cout<<"Second word: "<<endl;

    for(int i = 0; i < size2; i++){

   		cin>>word2[i];
   }

    int magicNum = 3;


    while(magicNum > size1 || magicNum > size2){

    	magicNum--;
    }
    
    printNewWord(word1, word2, size1, size2, magicNum);

	return 0;
}