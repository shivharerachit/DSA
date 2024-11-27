#include<iostream>
using namespace std;

// Naive Solution
bool checkPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    int root = sqrt(n) + 1; //Further optimization
    for(int i = 5 ; i <= root ; i= i + 6) if(n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

void primeFactors(int n){
    for(int i = 2 ; i < n ; i++){
        if(checkPrime(i)){
            int x = i;
            while(n % x == 0){
                cout << i << " ";
                x *= i;
            }
        }
    }
}

// Optimized Approach
void printPrimeFactors(int n){
    while (n % 2 == 0){
        cout << 2 << " ";
        n /= 2;
    }
    while(n % 3 == 0){
        cout << 3 << " ";
        n /= 3;
    }
    // int root = sqrt(n) + 1;
    for(int i = 5 ; i <= n ; i = i + 6){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
        while(n % (i + 2) == 0){
            cout << i + 2 << " ";
            n /= i + 2;
        }
    }
    if(n > 3) cout << n << " ";
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    primeFactors(n);
    cout << endl;
    printPrimeFactors(n);
    cout << endl;
    return 0;
}