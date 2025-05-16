#include<iostream>
using namespace std;

// My Approach Naive Solution
void moveZeros(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){   
            int j;
            for(j = i ; j < n ; j++){
                if(arr[j] != 0){
                    break;
                }
            }
            arr[i] = arr[j];
            arr[j] = 0;
        }
    }
}


// Efficient Approach
void mvZeros(int arr[], int n){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=0){
            swap(arr[count], arr[i]);
            // int temp = arr[i];
            // arr[i]=0;
            // arr[count] = temp;
            count++;
        }
    }
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {7,0,0,0,2,6,3};
    int noOfElements = 7;

    // moveZeros(arr, noOfElements);
    mvZeros(arr, noOfElements);
    for(int i = 0 ; i < noOfElements ; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}