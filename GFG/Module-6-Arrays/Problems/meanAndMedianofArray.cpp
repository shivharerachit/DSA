#include<iostream>
using namespace std;


int median(int A[], int N) {

    sort(A, A + N);

    if(N%2 == 0){
        return (A[N/2] + A[(N/2)-1])/2;
    }
    return A[N/2];
}

// Function to find mean of the array elements.
int mean(int A[], int N) {
    int sum = 0;
    for(int i = 0 ; i < N ; i++){
        sum += A[i];
    }
    return sum/N;
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {7,2,5,4,9,6,3};
    // int arr[capacity] = {7,7,7,7,7,7,7};
    int noOfElements = 7;

    cout << mean(arr, noOfElements) << " " <<. median(arr, noOfElements);
    return 0;
}