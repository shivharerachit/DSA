#include<iostream>
using namespace std;

// When the parent function has nothing to do after calling the child function then it is called tail recursion.
// When the parent function has something to do after calling the child function then it is not a tail recursive function.

// Tail Recusive function
void fun(int n){
    if(n == 0)
        return;
    cout << n << "\t";
    fun(n-1);
}

// Not a Tail Recursive Function
void fun1(int n){
    if(n == 0)
        return;
    fun1(n-1);
    cout << n << "\t";
}

// Converting fun1() to Tail Recursive Function
void fun1TR(int n, int k){
    if(n == 0)
        return;
    cout << k << "\t";
    fun1TR(n-1, k+1);
}

// TR functions are converted by modern compilers in non recursive functions in order to improve the time and space complexity.
// Compilers remove the function call and modify the value at the end of the function and use "goto" property to restart function.

int fun2(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * fun2(n-1);
}

int fun2TR(int n, int k){
    if(n == 0 || n == 1)
        return k;
    return fun2TR(n-1, k*n);
}

int main(){
    int n = 4;
    fun(n);
    cout << "\n";
    fun1(n);
    cout << "\n";
    fun1TR(n, 1);
    cout << "\n";
    cout << fun2(n) << "\n";
    cout << fun2TR(n, 1) << "\n";
    return 0;
}