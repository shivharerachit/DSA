#include<iostream>
using namespace std;

// Iterative Approach
// Better Approach
int fact(int n){
    int res = 1;
    for(int i = 2 ; i <= n ; i++){
        res = res * i;
    }
    return res;
}

// Recursive Approach
// High Space Complexity
int factorial(int n){
    if(n == 0) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Iterative Factorial of " << n << " is " << fact(n) << ".\n";
    cout << "Recursive Factorial of " << n << " is " << factorial(n) << ".\n";
    return 0;
}