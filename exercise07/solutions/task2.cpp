#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int size;
    double sum = 0.0;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){

        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){

        sum += arr[i];
    }

    double avg = sum / size;
    double diff = abs(arr[0] - avg);
    int num = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(abs(arr[i] - avg) < diff)
        {
            diff = abs(arr[i] - avg);
            num = arr[i];
        }
    }
    cout << "Closest number to average is: " << num << " with difference: " << diff << endl;

    return 0;
}
