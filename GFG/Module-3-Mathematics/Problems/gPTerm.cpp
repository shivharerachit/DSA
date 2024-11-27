#include<iostream>
using namespace std;

double termOfGP(int A,int B,int N){
    double r = (double(B))/A;
    return (A*pow(r, N-1));
}

int main(){
    int A,B;
    cin>>A>>B; 
    int N;
    cin>>N; 
    cout<<floor(termOfGP(A,B,N))<<endl;
    return 0;
}