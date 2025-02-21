#include<iostream>
using namespace std;

bool uPrime(int n){
    if(n == 1) return false;
    for(int i = 2 ; i < n ; i++){ 
        if(n % i == 0){ 
            return false;
        }
    }
    return true;
}

// Efficient Method
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2 ; i  <= n ; i++) if(n % i == 0) return false;
    return true;
}

// Improved Efficient Method
bool checkPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    int root = sqrt(n) + 1; //Further optimization
    for(int i = 5 ; i <= root ; i= i + 6) if(n % i == 0 || n % (i + 2) == 0) return false;
    return true;

}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(checkPrime(n)) cout << n << " is a Prime Number.\n";
    else cout << n << " is not a Prime Number.\n";
    return 0;
}







5	7
11	13	
17	19
23	29
31	37	41	43	47	53	59	61	67	71  73	79	83	89	97	101	103	107	109	113	127	131	137	139	149	151	157	163	167	173
179	181	191	193	197	199	211	223	