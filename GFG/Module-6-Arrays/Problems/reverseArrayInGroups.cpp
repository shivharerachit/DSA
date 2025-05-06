#include<iostream>
using namespace std;

void reverseInGroups(vector<int> &arr, int k) {
    if(k >= arr.size()){
        int low = 0, high = arr.size()-1;
        while(low < high){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }  
        return;
    }
    int gap = k;
    while(k < arr.size()){
        int low = k-gap, high = k-1;
        while(low < high){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }    
        k += gap;
    }
    int low = k - gap, high = arr.size()-1;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }   
}

int main(){
    vector<int> arr = {7,2,5,4,9,6,3};
    
    reverseInGroups(arr, 3);
    
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}