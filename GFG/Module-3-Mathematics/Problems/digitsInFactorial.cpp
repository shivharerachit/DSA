#include<iostream>
using namespace std;

int digitsInFactorial(int N){
    if (N <= 0 || N == 1)
        return 1;

    double digits = 0;
    for (int i = 2; i <= N; i++) {
        digits += log10(i);
    }
    
    return floor(digits) + 1;
}

int main(){
    cout << digitsInFactorial(5) << "\n";
    return 0;
}