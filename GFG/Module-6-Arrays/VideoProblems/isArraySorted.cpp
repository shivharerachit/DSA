#include<iostream>
using namespace std;

// Naive Solution
bool isSorted(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[i]) 
                return false;
        }
    }
    return true;
}

// Efficient Solution
bool isArraySorted(int arr[], int n){
    for(int i = 1 ; i < n ; i++ )
        if(arr[i] < arr[i-1]) 
            return false;
    return true;
}
int main(){
    const int capacity = 10;
    int arr[capacity] = {7,2,5,4,9,6,3};
    // int arr[capacity] = {7,7,7,7,7,7,7};
    int noOfElements = 7;

    cout << mean(arr, noOfElements) << " " <<. median(arr, noOfElements);
    return 0;
}