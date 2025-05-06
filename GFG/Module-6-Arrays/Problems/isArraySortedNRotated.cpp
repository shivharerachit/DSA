#include<iostream>
using namespace std;

bool checkRotatedAndSorted(int arr[], int num) {
    int inc = 0, dec = 0;
    for(int i = 0 ; i < num ; i++){
        if(arr[i] < arr[(i+1) % num] ){
            inc++;
        } else if(arr[i] > arr[(i+1) % num]){
            dec++;
        }
    }
    return (inc == 1 || dec == 1);
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {7,2,5,4,9,6,3};
    // int arr[capacity] = {7,7,7,7,7,7,7};
    int noOfElements = 7;

    cout << checkRotatedAndSorted(arr, noOfElements) << endl;
    return 0;
}