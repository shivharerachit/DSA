#include<iostream>
using namespace std;

// Incorrect many times due to too long variable fact which may not be stored in int
int countZeros(int n){
    int fact = 1;
    for(int i = 2 ; i <= n ; i++)fact = fact * i;
    int res = 0;
    while(fact % 10 == 0){
        res++;
        fact = fact/10;
    }
    return res;
}

// Better Approach
int countTrailingZeros(int n){
    int res = 0;
    for(int i = 5 ; i <= n ; i *= 5) res += (n / i);
    return res;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of trailing zeros in factorial of " << n << " is " << countZeros(n) << ".\n";
    cout << "Number of trailing zeros in factorial of " << n << " is " << countTrailingZeros(n) << ".\n";
    return 0;
}