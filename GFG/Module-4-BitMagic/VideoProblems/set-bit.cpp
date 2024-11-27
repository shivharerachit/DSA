#include<iostream>
using namespace std;

// How to set a bit in the number 'num' : If we want to set a bit at nth position in number 'num' ,it can be done using 'OR' operator( | ).
// First we left shift '1' to n position via (1 << (n-1))
// Then, use 'OR' operator to set bit at that position.'OR' operator is used because it will set the bit even if the bit is unset previously in binary representation of number 'num'.

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int n;
    cout << "Enter the position to set bit: ";
    cin >> n;
    int mask = 1 << (n-1); // Creating a number with nth bit set and all the other unset
    cout << (num | mask) << "\n"; // Or operation of num with n will set the nth bit
    return 0;
}