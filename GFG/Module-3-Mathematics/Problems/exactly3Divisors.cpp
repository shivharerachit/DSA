#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    int root = sqrt(n) + 1; //Further optimization
    for(int i = 5 ; i <= root ; i= i + 6) if(n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}
int exactly3Divisors(int n){
    int count = 0;
    for(int i = 1 ; i <= sqrt(n) ; i++){
        if(checkPrime(i)) count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout<<exactly3Divisors(n)<<endl;
	return 0;
}