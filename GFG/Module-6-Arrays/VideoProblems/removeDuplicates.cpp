#include<iostream>
using namespace std;

// My Approach
int removeDuplicates(int arr[], int n){
    int index = n;
    for(int i = 1 ; i < index ; i++){
        if(arr[i] == arr[i-1]){
            for(int j = i+1 ; j < index ; j++){
                arr[j-1] = arr[j];
            }
            index--;
        }
    }

    return index;
}

// Naive Approach
int remDups(int arr[], int n){
    int temp[n];
    temp[0] = arr[0];
    int res = 1 ;
    for (int i = 1 ; i < n ; i++){
        if (temp[res - 1] != arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res ; i++){
        arr[i] = temp[i];
    }
    return res;
}

// Efficient Approach
int removeDups(int arr[], int n){
    int res = 1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {1,2,2,3,4,5,5,6,7,7};
    int noOfElements = 10;

    // noOfElements = removeDuplicates(arr, noOfElements);
    // noOfElements = remDups(arr, noOfElements);
    noOfElements = removeDups(arr, noOfElements);
    for(int i = 0 ; i < noOfElements ; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}