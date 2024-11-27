#include<iostream>
using namespace std;

long long sumUnderModulo(long long a,long long b){
    long long M = 1000000007;
    return ((a % M) + (b % M)) % M;
}

int main() {
    long long a;
    long long b;
    cin>>a>>b;
    cout<<sumUnderModulo(a,b)<<endl;
	return 0;
}