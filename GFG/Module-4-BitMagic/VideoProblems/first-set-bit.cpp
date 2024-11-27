#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rsb = n & -n;
    cout << log2(rsb) << "\n";
    return 0;
}