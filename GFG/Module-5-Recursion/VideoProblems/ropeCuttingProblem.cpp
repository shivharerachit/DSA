#include<iostream>
#include <algorithm>
using namespace std;

// We have a rope of length 'n' and we have to cut the rope into maximum 
// pieces such that the size of each partition is either 'a', 'b' or 'c'.

int ropeCutting(int n, int a, int b, int c){
    if(n == 0)
        return 0;
    if(n < 0)
        return -1;
    int res = max(ropeCutting(n-a, a, b, c), max(ropeCutting(n-b, a, b, c), ropeCutting(n-c, a, b, c)));
    if(res == -1)
        return -1;
    return res + 1;
}

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << ropeCutting(n, a, b, c) << "\n";
    return 0;
}