#include<iostream>
using namespace std;

// My Approach
void moveZeros(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){   
            int j;
            for(j = i ; j < n ; j++){
                arr[j] = arr[j+1];
            }
            arr[j] = 0;
        }
    }
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {7,0,0,0,2,6,3};
    int noOfElements = 7;

    moveZeros(arr, noOfElements);
    for(int i = 0 ; i < noOfElements ; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}