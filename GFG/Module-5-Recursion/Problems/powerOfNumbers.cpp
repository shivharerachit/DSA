#include<iostream>
using namespace std;

int reverseExponentiation(int n) {
    int x = n;
    int rev = 0;
    while(x!=0){
        rev = x % 10;
        x = x / 10;
    }
    return pow(n, rev);
}

int main(){
    int n;
    cin >> n;
    cout << reverseExponentiation(n) << "\n";
    return 0;
}