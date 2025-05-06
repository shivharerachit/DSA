#include<iostream>
using namespace std;

int countSubset(int arr[], int n, int sum){
    if(n == 0) return (sum == 0) ? 1 : 0;
    return countSubset(arr, n-1, sum) + countSubset(arr, n-1, sum-arr[n-1]);
}

int main(){
    int arr[4] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;
    cout << countSubset(arr, n, sum);
}