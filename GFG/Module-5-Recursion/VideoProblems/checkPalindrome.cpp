#include<iostream>
using namespace std;

bool checkPal(string &S, int start, int end){
    if(start >= end)
        return true;
    return (S[start] == S[end]) && checkPal(S, start+1, end-1);
}

int main(){
    string S;
    cin >> S;
    cout << checkPal(S, 0, S.size()-1) << "\n";
    return 0;
}