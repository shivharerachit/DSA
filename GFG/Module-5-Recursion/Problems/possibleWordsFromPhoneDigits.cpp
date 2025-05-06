#include<iostream>
using namespace std;



const vector<string> keypad = {
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};
          
void backtrack(vector<int>& arr, int index, string current, vector<string>& result){
    if(index == arr.size()) {
        result.push_back(current);
        return;
    }
    
    string letters = keypad[arr[index]];
    for(char ch : letters) {
        backtrack(arr, index + 1, current + ch, result);
    }
};

vector<string> possibleWords(vector<int> &arr) {
    vector<string> result;
    if(arr.empty()) return result;
    
    backtrack(arr, 0 ,"", result);
    return result;
};
  

int main(){
    vector<int> arr = {2,4,6};
    vector<string> result = possibleWords(arr); 
    
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << "\n";
    return 0;
}