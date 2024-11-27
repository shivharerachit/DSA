#include<iostream>
using namespace std;

int absolute(int I) {
    if(I<0) I*=-1;
    return I;
}
int main(){
    cout << absolute(-20) << "\n";
    return 0;
}