#include<iostream>
using namespace std;

// Naive Solution
void printOdd(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < n ; j++) if(arr[i] == arr[j]) count++;
        if(count % 2 != 0) cout << arr[i] << " ";
    }
}

// Optimized Solution
void oddAppearing(int arr[], int n){
    int x = arr[0];
    for(int i = 1 ; i < n)
}

int main(){
    int arr[100], n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the elements: \n";
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    printOdd(arr, n);
    cout << "\n";
    return 0;
}