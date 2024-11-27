#include<iostream>
using namespace std;

double cToF(int C){
    return ( ( C * 9.0 ) / 5.0 ) + 32 ;
}

int main(){
    cout << cToF(56) << "\n";
    return 0;
}