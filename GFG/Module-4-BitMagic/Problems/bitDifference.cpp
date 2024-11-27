#include<iostream>
using namespace std;

int countBitsFlip(int a, int b){
    int r = a ^ b;
    int count = 0;
    while(r != 0){
        int x = r & -r;
        count++;
        r = r - x;
    }
    return count;
}

int main(){
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout << "Number of bits to flip to convert a to b is: " << countBitsFlip(a, b) << "\n";
    return 0;
}