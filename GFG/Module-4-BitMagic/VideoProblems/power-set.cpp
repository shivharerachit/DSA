#include<iostream>
using namespace std;

void printPowerSet(string s) {
    int n = s.length();
    int pSize = 1 << n;
    for(int i = 0; i < pSize; i++) {
        for(int j = 0; j < n; j++) {
            if((i & (1 << j)) != 0) {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main() {
    string s = "ab";
    printPowerSet(s);r
    return 0;
}   