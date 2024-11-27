#include <iostream>
using namespace std;

// Brute Force Approach
int maxANDbrute (int arr[], int N){
    int max = 0;
    for(int i = 0 ; i < N ; i++){
        for(int j = i + 1 ; j < N ; j++){
            if(max < (arr[i] & arr[j])){
                max = arr[i] & arr[j];
            } 
        }
    }
    return max;
}

// Optimized Approach
int maxANDopti (int arr[], int N){
    int max = 0;
    for(int i = 31 ; i >= 0 ; i--){
        int temp = max | 1 << i;
        int count = 0;
        for(int j = 0 ; j < N ; j++){
            if((arr[j] & temp) == temp){
                count++;
            }
        }
        if(count >= 2) max = temp;
    }
    return max;
}

int main() {
    int N;
    cout << "Enter the size of the array : ";
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    cout << maxANDbrute(arr, N) << endl;
    cout << maxANDopti(arr, N) << endl;
    return 0;
}   