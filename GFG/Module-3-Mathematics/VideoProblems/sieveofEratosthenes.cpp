#include<bits/stdc++.h>
#include<iostream>
// #include "checkPrime.cpp"
using namespace std;

bool checkPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    int root = sqrt(n) + 1; //Further optimization
    for(int i = 5 ; i <= root ; i= i + 6) if(n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

// Brute-Force Approach
void SieveOfEratosthenesBrute(int n){
    for(int i = 2 ; i <= n ; i++){
        if(checkPrime(i)) cout << i << " ";
    }
}

// Optimized Approach
// Seieve of Erotosthenes
void SieveOfEratosthenes(int n){
    vector<bool> isPrime(n+1, true);
    int root = sqrt(n);
    for(int i = 2 ; i <= root ; i++){
        if(isPrime[i]){
            for(int j = i*i ; j <= n ; j=j+i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2 ; i <= n ; i++){
        if(isPrime[i]) cout << i << " " ;
    }
}

// Further Optimized Approach
void SieveOfEratosthenesOptimized(int n){
    vector<bool> isPrime(n+1, true);
    for(int i = 2 ; i <= n ; i++){
        if(isPrime[i]){
            cout << i << " ";
            for(int j = i*i ; j <= n ; j=j+i){
                isPrime[j] = false;
            }
        }
    }
}

int main(){
	int n;
    cout << "Enter a number:";
    cin >> n;
	cout << "Following are the prime numbers smaller than or equal to " << n << endl;
    SieveOfEratosthenesBrute(n);
    cout << "\n";
	SieveOfEratosthenes(n);
    cout << "\n";
    SieveOfEratosthenesOptimized(n);
    cout << "\n";
    return 0;
}