#include<iostream>
using namespace std;

int posOfRightMostDiffBit(int m, int n){
    int r = m^n;
    if(r == 0) return -1;
    int rsb = r & -r;
    return log2(rsb)+1;
}

int main(){
    int m, n;
    cout << "Enter two numbers:";
    cin >> m >> n;
    cout << "Position of rightmost different bit is: " << posOfRightMostDiffBit(m, n) << "\n";
    return 0;
}