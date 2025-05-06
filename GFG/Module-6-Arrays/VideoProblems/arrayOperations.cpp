#include<iostream>
using namespace std;

// Insert : O(n)
// Search : O(n) for unsorted
// unsorted : O(logn) for sorted
// Delete : O(n)
// Get i-th Element : O(1)
// Update i-th Element: 0(1)
// Insert at the end and delete from the end can be done in o(1) time.

int search(int arr[], int n, int t){
    for(int i = 0 ; i < n ; i++) if(arr[i] == t) return i;
    return -1;
}

int insert(int arr[], int n, int x, int cap, int pos){
    if(n == cap) return n;
    int idx = pos - 1;
    for(int i = n-1 ; i >= idx ; i--) arr[i+1] = arr[i];
    arr[idx] = x;
    return (n+1);
}

int deletion(int arr[], int n, int x){
    int i;
    for(i=0 ; i<n ; i++) if(arr[i] == x) break;
    if(i == n) return n;
    for(int j=i ; j < n-1 ; j++) arr[j] = arr[j+1];
    return (n-1);
}

int main(){
    const int capacity = 10;
    int arr[capacity] = {1,2,3,4,5,6,7};
    int noOfElements = 7,
        toBeSearched = 3, 
        toBeInserted = 9, 
        position = 3, 
        toBeDeleted = 1;
    
    // Searching
    cout << search(arr, noOfElements, toBeSearched) << endl;
    for (int i = 0; i < noOfElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion
    noOfElements = insert(arr, noOfElements, toBeInserted, capacity, position);
    for (int i = 0; i < noOfElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deletion
    noOfElements = deletion(arr, noOfElements, toBeDeleted);
    for (int i = 0; i < noOfElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}