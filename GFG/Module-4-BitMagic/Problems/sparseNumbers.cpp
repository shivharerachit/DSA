#include <iostream>
using namespace std;

bool isSparse(int n){
    for(int i = 0 ; i < 31 ; i++){
        int temp = 1<<i;
        if((n & temp) != 0){
            temp = temp<<1;
            if((n & temp) != 0){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int N;
    cout << "Enter the number to be checked : ";
    cin >> N;
    cout << isSparse(N) << endl;
    return 0;
}   