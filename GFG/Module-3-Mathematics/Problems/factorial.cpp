#include <iostream>
using namespace std;

long long factorial(int N) {
    long long ans = 1;
    for(int i = 2 ; i <= N ; i++){
        ans *= i;
    }
    return ans;
}

int main() {
    cout << factorial(5) << "\n";
    return 0;
}