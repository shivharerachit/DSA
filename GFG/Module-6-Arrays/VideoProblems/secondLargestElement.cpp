#include<iostream>
using namespace std;

// Naive Approach
int getLargest(int arr[], int n){
    int largest = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > arr[largest]){
            largest = i;
        }
    }
    return largest;
}

int secondLargest(int arr[], int n){
    int largest = getLargest(arr, n);
    int res = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != largest){
            if(res == -1){
                res = i;
            } else if(arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;
}

// Efficient Approach
int secondLargestElement(int arr[], int n){
    int l = 0, sl = -1;
    for(int i = 1 ; i < n ; i++){
        cout << arr[i] << " > " << arr[l] << endl;
           sif(arr[i] > arr[l]){
            sl = l;
            l = i;
        } else if(arr[i] != arr[l] && arr[i] > arr[sl]){
            sl = i;
        }
    }
    cout << arr[sl] << endl;
    return sl;
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {7,2,5,4,9,6,3};
    // int arr[capacity] = {7,7,7,7,7,7,7};
    int noOfElements = 7;

    cout << secondLargestElement(arr, noOfElements) << endl;

    cout << secondLargest(arr, noOfElements) << endl;
    return 0;
}