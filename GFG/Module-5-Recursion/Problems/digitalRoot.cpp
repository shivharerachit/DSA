#include<iostream>
using namespace std;
int digitalRoot(int n){
    if(n<10) return n;
    return digitalRoot(
        (n % 10) + 
        (n % 100) / 10 + 
        (n % 1000) / 100 + 
        (n % 10000) / 1000 + 
        (n % 100000) / 10000 + 
        (n % 1000000) / 100000 + 
        (n % 10000000) / 1000000 +
        (n % 100000000) / 10000000 
        );
}

int main() {
    int n;
    cin >> n;
    cout << digitalRoot(n) << endl;
	return 0;
}