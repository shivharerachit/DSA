#include<iostream>
using namespace std;
void powerSet(string str, int i, string curr, vector<string> &ans){
    int n = str.length();
    if(i == n){
        ans.push_back(curr);
        return;
    }
    powerSet(str, i+1, curr+str[i], ans);
    powerSet(str, i+1, curr, ans);
}

vector<string> powerSet(string s){
    vector<string> ans;
    string y = "";
    powerSet(s, 0, y, ans);
    return ans;
}

int main(){
    vector<string> v;
    v = powerSet("abc");
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << "\t";
    }
    return 0;
}