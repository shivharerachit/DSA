#include<iostream>
using namespace std;

// Bruteforce approach
int powerBrute(int x, int n){
    int res = 1;
    for(int i = 0 ; i < n ; i++)
        res = res * x;
    return res;
}

// Efficient approach
int power(int x, int n){
    if(n == 0 ) return 1;
    int temp = power(x, n/2);
    temp = temp * temp;
    if(n % 2 == 0) return temp;
    else return temp * x;
}

// More efficient iterative approach
int powerEff(int x, int n){
    long long int ans = 1;
    while(n>0){
        if(n % 2 != 0) ans *= x;
        n/=2;
        x=x*x;
    }
    return ans;
}


int main(){
    int x=7, n=86;
    cout << "Solution of " << x << " to the power " << n << " is equal to " << powerBrute(x, n) << ".\n";
    cout << "Solution of " << x << " to the power " << n << " is equal to " << power(x, n) << ".\n";
    cout << "Solution of " << x << " to the power " << n << " is equal to " << powerEff(x, n) << ".\n";
    return 0;
}