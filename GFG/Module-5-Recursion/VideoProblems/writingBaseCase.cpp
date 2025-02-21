#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0)
        return 1;

    return n * fact(n-1);
}

int fib(int n){
    if(n == 0) 
        return 0;
    else if (n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n = 4;
    cout << fact(n) << "\n";
    cout << fib(n) << "\n";
    return 0;
}