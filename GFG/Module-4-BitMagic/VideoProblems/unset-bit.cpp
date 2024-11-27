// How to unset/clear a bit at n'th position in the number 'num' :
// Suppose we want to unset a bit at nth position in number 'num' then we have to do this with the help of 'AND' (&) operator.
// First we left shift '1' to n position via (1 << (n-1)) than we use bitwise NOT operator '~' to unset this shifted '1'.
// Now after clearing this left shifted '1' i.e making it to '0' we will 'AND'(&) with the number 'num' that will unset bit at nth position.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int n;
    cout << "Enter the position: ";
    cin >> n;
    int mask = 1 << (n-1);
    mask = ~mask;
    cout << (num & mask) << "\n";
    return 0;
}