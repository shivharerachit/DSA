#include<iostream>
using namespace std;

unsigned int getFirstSetBit(int n){
    if (n == 0) return 0;
    int rsb = n & -n;
    int pos = log2(rsb);
    return pos+1;
}

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Position of first set bit is: " << getFirstSetBit(n) << "\n";
    return 0;
}