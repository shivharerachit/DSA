#include<iostream>
using namespace std;

// Naive Solution
int oneOddOccuring(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        int c = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[i] == arr[j]) c++;
        }
        if(c % 2 != 0) return arr[i];
    }
    return -1;
}

// Optimized Solution
int optiOneOddOccuring(int arr[], int n){
    int res = arr[0];
    for(int i = 1 ; i < n ; i++) res = res ^ arr[i];
    return res;
}


int main(){
    int arr[100], n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the elements: \n";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Solution for the Brute Force approach :" << oneOddOccuring(arr, n) << "\n";
    cout << "Solution for the Optimized approach :" << optiOneOddOccuring(arr, n) << "\n";
    return 0;
}