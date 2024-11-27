#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int n; 
    cout << "Enter the position: ";
    cin >> n;

    // Method - 1
    int mask = 1 << (n-1);
    if(num & mask) cout << "Yes\n";
    else cout << "No\n";

    // Method - 2
    // int mask = num >> (n-1);
    // if(mask & 1) cout << "Yes\n";
    // else cout << "No\n";

    return 0;
}