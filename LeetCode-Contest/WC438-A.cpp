#include<iostream>
using namespace std;

// bool hasSameDigits(string s) {
//     cout << s << "\n";
//     cout << "length " << s.length() << "\n";
//     lab:
//     string temp = "";
//     for(int i = 0 ; i < s.length()-1 ; i++){
//         // temp *= 10;
//         cout << "temp " << (int)s[i] - 48 <<(((int)s[i] -48) + ((int)s[i+1] -48)) % 10 << "\n";
//         temp.append(to_string((((int)s[i] -48) + ((int)s[i+1] -48)) % 10));
//         cout << temp << "\n";
//     }
//     // s = to_string(temp);
//     s = temp;
//     if(s.length() > 2){
//         goto lab;
//     }
//     cout << s << "\n";
//     if(s[0] == s[1] || s[0] == '0'){
//         return true;
//     }
//     return false;
// }


// bool hasSameDigits(string s) {
//     lab:
//     int temp = 0;
//     for(int i = 0 ; i < s.length()-1 ; i++){
//         temp *= 10;
//         temp += (((int)s[i]-48) + ((int)s[i+1])-48) % 10;
//     }
//     s = to_string(temp);
//     if(s.length() > 2){
//         goto lab;
//     }
//     if(s[0] == s[1]){
//         return true;
//     }
//     return false;
// }


bool hasSameDigits(string s) {
    lab:
        string temp = "";
        for (int i = 0; i < s.length() - 1; i++) {
            temp.append(
                to_string((((int)s[i] - 48) + ((int)s[i + 1]) - 48) % 10));
        }
        s = temp;
        if (s.length() > 2) {
            goto lab;
        }
        if (s[0] == s[1]) {
            return true;
        }
        return false;
}

int main(){
    string s;
    cin >> s;
    cout << hasSameDigits(s) << "\n";
    return 0; 
}