#include<iostream>
using namespace std;

int gcd(int a, int b){
    int res = min(a,b);
    while(res>0){
        if(a % res == 0 && b % res == 0) break;
        res--;
    }
    return res;
}

// Euclidean Algorithm
int gcdEcludean(int a, int b){
    while(a != b){
        if(a > b) a -= b;
        else b = b - a;
    }
    return a;
}

// Optimized Ecludean Algorithm
int gcdOptimEclud(int a, int b){
    if(b == 0) return a;
    else return gcdOptimEclud(b, a % b);
}

int main(){
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Greatest Common Divisor(GCD) or Highest Common Factor(HCF) of " << a << " & " << b << " is " << gcd(a, b) << ".\n";
    cout << "Greatest Common Divisor(GCD) or Highest Common Factor(HCF) of " << a << " & " << b << " by Ecludean Algorithm is " << gcdEcludean(a, b) << ".\n";
    cout << "Greatest Common Divisor(GCD) or Highest Common Factor(HCF) of " << a << " & " << b << " by Optimized Ecludean Algorithm is " << gcdOptimEclud(a, b) << ".\n";
    return 0;
}