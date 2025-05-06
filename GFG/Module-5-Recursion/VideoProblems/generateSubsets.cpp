#include<iostream>
using namespace std;

void generateSubsets(string &S, string curr = "", int i = 0){
    if(i == S.length()){
        cout << "CurrEnd: " <<  curr << " ";
        return;
    }
    generateSubsets(S, curr, i+1);
    generateSubsets(S, curr + S[i], i+1);
}

int main(){
    string S;
    cin >> S; 
    generateSubsets(S);
    cout << "\n";
    return 0;
}