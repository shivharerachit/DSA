#include <iostream>
using namespace std;

//Naive Solution
void printDivisors(int n){
    for(int i = 1 ; i <= n ; i++) if(n % i == 0) cout << i << " ";
    cout << "\n";
}

// Efficient Solution
void printDivisor(int n){
    for(int i = 1 ; i <= sqrt(n) ; i++) if(n % i == 0){
        cout << i << " ";
        if(i != n / i) cout << n / i << " ";
    }
    cout<<"\n";
}

// Optimized Approach
void printDivisorSorted(int n){
    int i;
    for(i = 1 ; i <= sqrt(n) ; i++) if(n % i == 0) cout << i << " ";
    for( ; i >= 1 ; i--) if(n % i == 0) cout << n / i << " ";
    cout << "\n";
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printDivisors(n);
    printDivisor(n);
    printDivisorSorted(n);
    cout << endl;
    return 0;
}