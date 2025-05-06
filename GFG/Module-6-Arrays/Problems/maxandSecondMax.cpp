#include<iostream>
using namespace std;

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]) {
    int max = -1, max2 = -1;
    for(int i = 0 ; i < sizeOfArray ; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        } else if(arr[i] != max && arr[i] > max2){
            max2 = arr[i];
        }
    }
    return {max, max2};
}

int main(){
    return 0;
}