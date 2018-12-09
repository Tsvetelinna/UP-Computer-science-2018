#include <iostream>
using namespace std;


int main(){
	
	int n, m, k;

	cin>>n;

	cin>>m;

	int arr[n][m];

	for(int i = 0; i < n; i++){

		for(int j = 0; j < m; j++){

			cin>>arr[i][j];
		}
	}


	cout<<"k = ";

	cin>>k;

	if(k < m){

		for(int i = k; i < n-1; i++){

            for(int j = 0; j < m; j++){

                arr[i][j] = arr[i][j+1];
            }
		}

    	m--;
	}

	for(int i = 0; i < n; i++){

		for(int j = 0; j < m; j++){

			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}

	return 0;

}