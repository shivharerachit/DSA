#include<iostream>
using namespace std;

// Naive Approach
int getLargest(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        bool flag = true;
        for(int j = i + 1 ; j < n ; j++){ // Can be j = 0 initially
            if(arr[j] > arr[i]){
                flag = false;
                break;
            }
        }
        if(flag == true) return i;
    }
    return -1;
}

// Efficient Approach
int getLargestEff(int arr[], int n){
    int index = 0;
    for(int i = 1 ; i < n ; i++) if(arr[i] > arr[index]) index = i;
    return index;
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {1,2,7,4,9,6,7};
    int noOfElements = 7;

    // Naieve Approach
    int i = getLargest(arr, noOfElements);
    cout << "arr[" << i << "] = " << arr[i] << endl;

    // Effiecient Approach
    i = getLargestEff(arr, noOfElements);
    cout << "arr[" << i << "] = " << arr[i] << endl;

    return 0;
}