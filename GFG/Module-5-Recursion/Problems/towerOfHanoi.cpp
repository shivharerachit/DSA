#include<iostream>
using namespace std;

int towerOfHanoi(int n, int from, int to, int aux) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return towerOfHanoi(n-1, from, aux, to) + 1 + towerOfHanoi(n-1, to, from, aux);
}

int main() {
    int N;
    cin >> N; 
    cout << towerOfHanoi(N, 1, 3, 2) << endl;
    return 0;
}
10000000 % 10000000
(n % 10000000) / 1000000