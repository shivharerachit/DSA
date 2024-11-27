#include<iostream>
using namespace std;

int countSetBits(int n){   
    if(n == 0) return 0;
    int p = log2(n);
    cout << p << "\n";
    int re = (p*pow(2, p))/2 + (n - pow(2, p) + 1) + countSetBits(n - pow(2, p));
    return re;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of set bits in " << n << " is: " << countSetBits(n) << "\n";
    return 0;
}