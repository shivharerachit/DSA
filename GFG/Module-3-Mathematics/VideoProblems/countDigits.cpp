#include<iostream>
using namespace std;

int countDigits(int x){
    int res = 0;
    while(x>0){
        x = x/10;
        res++;
    }
    return res;
}

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "No. of digits are " << countDigits(n) << "\n";
    return 0;
}