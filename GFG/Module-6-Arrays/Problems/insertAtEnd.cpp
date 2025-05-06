#include<iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray, int element) {
    arr[sizeOfArray-1] = element;
}

int main(){
    int arr[5]={1,2,3,4};
    insertAtEnd(arr, 5, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}