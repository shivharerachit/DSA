#include<iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray, int index, int element) {
    for(int i = sizeOfArray-1 ; i >= index ; i-- ){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}

int main(){
    int arr[5]={1,2,3,4};
    insertAtEnd(arr, 5, 2, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}