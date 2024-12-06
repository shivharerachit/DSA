#include<iostream>
using namespace std;

void fun1(){
    cout<<"fun1\n";
}

void fun2(){
    cout<<"Before fun1\n";
    fun1();
    cout<<"After fun1\n";
}

void fun3(){
    cout<<"GFG\n";
    fun1();
}

void fun4(int n){
    if(n == 0){
        return;
    }
    cout<<"GFG\n";
    fun4(n-1);
}

void fun5(int n){
    if(n == 0) return;
    cout << n << endl;
    fun5(n-1);
    cout << n << endl;
}

void fun6(int n){
    if(n == 0) return;
    fun6(n-1);
    cout<<n<<endl;
    fun6(n-1);
}

int fun7(int n){
    if(n == 1) return 0;
    else return (1+fun7(n/2));
}

void fun8(int n){
    if(n == 0) return;
    fun8(n/2);
    cout << (n%2);

}

int main(){

    // cout<<"Before fun2\n";
    // fun2();
    // cout<<"After fun2\n";

    // fun3();

    // fun4(3);

    // fun5(4);

    // fun6(5);

    // cout << fun7(16) << "\n";

    fun8(7);
    cout << "\n";

    
    return 0;
}