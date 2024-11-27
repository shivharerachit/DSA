#include<iostream>
using namespace std;

bool checkKthBit(int n, int k) {
    int mask = 1 << (k);
    if(n & mask) return true;
    else return false;
}

int main(){
    int n, k;
    cout << "Enter two numbers:";
    cin >>  n >> k;
    cout << "Is the " << k << "th bit set in " << n << "? " << checkKthBit(n, k) << "\n";
    return 0;
}