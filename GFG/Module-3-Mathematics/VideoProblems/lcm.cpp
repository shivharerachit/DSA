#include<iostream>
using namespace std;

int lcm(int a, int b){
    int res = max(a,b);
    while(true){
        if(res % a == 0 && res % b == 0) return res;
        res++;
    }
    return res;
}

// More optimal way to find LCM
// Optimized Ecludean Algorithm
int gcdOptimEclud(int a, int b){
    if(b == 0) return a;
    else return gcdOptimEclud(b, a % b);
}

int lcmGCD(int a, int b){
    return (a*b)/gcdOptimEclud(a, b);
}

int main(){
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Least Common Multiple(LCM) of " << a << " & " << b << " is " << lcm(a, b) << ".\n";
    cout << "Least Common Multiple(LCM) of " << a << " & " << b << " by Optimized Ecludean Algorithm is " << lcmGCD(a, b) << ".\n";j
    return 0;
}