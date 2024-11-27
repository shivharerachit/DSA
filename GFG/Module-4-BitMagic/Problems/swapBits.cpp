#include<iostream>
using namespace std;

unsigned int swapBits(unsigned int n){
    for(int i = 0 ; i < 32 ; i+=2){
        int i_bit = (n >> i) & 1;
        int i_1_bit = (n >> (i + 1)) & 1;
        n = n - (i_bit << i) - (i_1_bit << (i + 1)) + (i_bit << (i + 1)) + (i_1_bit << i);
    } 	
    return n;
}

unsigned int swapBitsOptimized(unsigned int n){
    unsigned int ev=n & 0xAAAAAAAA; 
    unsigned int od=n & 0x55555555; 
    ev>>=1;
    od<<=1;
    return (ev | od);
}

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Number after swapping bits is: "  << swapBits(n) << "\n";
    cout << "Number after swapping bits is: "  << swapBitsOptimized(n) << "\n";
    return 0;
}
