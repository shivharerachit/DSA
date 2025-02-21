#include<iostream>
using namespace std;

int RecursivePower(int n,int p)
{
    if(p == 0)
        return 1;
    return n*RecursivePower(n, p-1);
}

int main(){
    int n, p;
    cin >> n >> p;
    cout << RecursivePower(n, p) << "\n";
    return 0;
}