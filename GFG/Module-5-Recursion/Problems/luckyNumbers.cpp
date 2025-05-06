#include<iostream>
using namespace std;

int i = 2;

bool isLucky(int n) {
    if(n % i == 0) return 0;
    if(n < i) return 1;
    i += 1;
    return isLucky(n-(n/(i-1)));
}

int main(){
    cout << isLucky(9) << "\n";
    return 0;
}