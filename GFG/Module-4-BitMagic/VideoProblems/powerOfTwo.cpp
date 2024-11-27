#include<iostream>
using namespace std;

// Naive Solution
bool powerOfTwoNaive(int n){
    while(n > 1){
        if (n%2 == 0){
            n = n / 2;
        }
        else return false;
    }
    return true;
}

// Optimized Approach
bool powerOfTwoOptimized(int n){
    return (n & (n & (n - 1)) == 0);
}

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << powerOfTwoNaive(n) << "\n";
    cout << powerOfTwoOptimized(n) << "\n";
    return 0;
}