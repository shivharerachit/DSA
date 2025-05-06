#include<iostream>
using namespace std;

// Using third array
// void reverseArray(int arr[], int n, int rra[]){
//     for(int i = 0 ; i < n ; i++){
//         rra[i] = arr[n-i-1];
//     }
// }

void reverseArray(int arr[], int n){
    int low = 0, high = n-1;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {7,2,5,4,9,6,3};
    // int arr[capacity] = {7,7,7,7,7,7,7};
    int noOfElements = 7;

    // int rra[capacity];
    // reverseArray(arr, noOfElements, rra);
    reverseArray(arr, noOfElements);
    for(int i = 0 ; i < noOfElements ; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}