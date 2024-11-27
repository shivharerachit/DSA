#include<iostream>
using namespace std;

bool isPal(int n){
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return (rev == n);
}

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    if(isPal(n)) cout << n << " is a Palindrome number.\n";
    else cout << n << " is not a Palindrome number.\n";
    return 0;
}