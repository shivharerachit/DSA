#include<iostream>
using namespace std;

// Naive Solution
int n_set_bit(int n){
    int c = 0;
    while(n > 0){
        if(n % 2 == 1) c++;
        n /= 2;    
    }
    return c;
}

// Optimized Naive-Solution
int no_set_bit(int n){
    int c = 0;
    while(n > 0){
        if(n & 1) c++;
        // or
        // c = c + (n & 1);s
        n = n >> 1;    
    }
    return c;
}

// Brian Kerningam's Algorithm
int opti_n_set_bit(int n){
    int res = 0;
    while(n > 0){
        n = n & (n-1);
        res = res + 1;
    }
    return res;
}

// Look-Up Table Approach
int tbl[256];
void initialize(){ // Preprocessing
    tbl[0] = 0;
    for(int i = 1 ; i < 256 ; i++){
        tbl[i] = tbl[i & (i-1)] + 1;
    }
}
int countSetBit(int n){
    return (tbl[n & 255] + tbl[(n >> 8) & 255] + tbl[(n >> 16) & 255] + tbl[n >> 24]);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n_set_bit(n) << "\n";
    cout << no_set_bit(n) << "\n";
    cout << opti_n_set_bit(n) << "\n";
    initialize();
    cout << countSetBit(n) << "\n";
    return 0;
}