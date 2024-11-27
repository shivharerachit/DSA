#include <iostream>
using namespace std;

int grayToBin(int n){
    int res = 0;
    res = n;
    for(int i = 31 ; i >= 0 ; i--){
        int x = 1 << i;
        res = res ^ ((res & x)>>1);
    }
    return res;
}

int main() {
    int N;
    cout << "Enter the number to be converted : ";
    cin >> N;
    cout << grayToBin(N) << endl;
    return 0;
}   