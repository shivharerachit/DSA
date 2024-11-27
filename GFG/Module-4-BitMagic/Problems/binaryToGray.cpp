#include <iostream>
using namespace std;

int binToGray(int n){
    int m = n >> 1;
    int res = n^m;
    return res;
}

int main() {
    int N;
    cout << "Enter the number to be converted : ";
    cin >> N;
    cout << binToGray(N) << endl;
    return 0;
}   