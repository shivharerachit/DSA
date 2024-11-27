// g++ -std=c++11 rootsForQuadratic.cpp
#include<iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> quadraticRoots(int a, int b, int c) {
    int d = (b*b)-(4*a*c);
    if(d < 0) return {-1};
    int e = floor(((-1*b)+sqrt(d))/(2*a));
    int f = floor(((-1*b)-sqrt(d))/(2*a));
    return {max(e, f), min(e, f)};
}

int main(){
    vector<int> roots = quadraticRoots(1, -2, 1);
    cout << roots[0] << " " << roots[1] << "\n";
    return 0;
}