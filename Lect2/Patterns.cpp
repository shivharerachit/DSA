#include <iostream>
using namespace std;

void print1(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout << "* ";
        }
        cout << "\n";
    }    
}

void print2(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
            cout << "* ";
        }
        cout << "\n";
    }    
}

void print3(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
            cout << j+1 << " ";
        }
        cout << "\n";
    }    
}

void print4(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
            cout << i+1 << " ";
        }
        cout << "\n";
    }    
}

void print5(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = n ; j>i ; j--){
            cout <<  "* ";
        }
        cout << "\n";
    }    
}

void print6(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n-i ; j++){
            cout << j+1 << " ";
        }
        cout << "\n";
    }    
}

void print7(int n){
    int k=1;
    for(int i = 0 ; i<n ; i++){
        for(int j = 1 ; j<n-i ; j++){
            cout << " ";
        }
        for(int j=0 ; j<k ; j++){
            cout << "*";
        }
        for(int j = 1 ; j<n-i ; j++){
            cout << " ";
        }
        cout << "\n";
        k+=2;
    }    
}

void print8(int n){
    int k=(2*n)-1;
    for(int i = 0 ; i<n ; i++){
        for(int j = 1 ; j<i+1 ; j++){
            cout << " ";
        }
        for(int j=0 ; j<k ; j++){
            cout << "*";
        }
        for(int j = 1 ; j<i+1 ; j++){
            cout << " ";
        }
        cout << "\n";
        k-=2;
    }    
}

void print9(int n){
    print7(n);
    print8(n);
}

void print10(int n){
    for(int i = 0 ; i<=2*n-1 ; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for(int j = 0 ; j<stars ; j++){
            cout << "* ";
        }
        cout << "\n";
    }    

}

void print11(int n){
    bool a=0,b;
    for(int i = 0 ; i < n ; i++){
        a=!a;
        b=a;
        for(int j = 0 ; j < i + 1 ; j++){
            cout<<b<<" ";
            b=!b;
        }
        cout<<"\n";
    }
}

void print12(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout<<j+1;
        }
        for(int j = 0 ; j < 2*n-2*(i+1) ; j++){
            cout<<" ";
        }
        for(int j = i+1 ; j > 0 ; j--){
            cout<<j;
        }
        cout<<"\n";
    }
}

void print13(int n){
    int a = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
}

void print14(int n){
    char a = 'A';
    for(int i = 0 ; i < n ; i++){
        a = 'A';
        for(int j = 0 ; j < i + 1 ; j++){
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
}

void print15(int n){
    char a = 'A';
    for(int i = 0 ; i < n ; i++){
        a = 'A';
        for(int j = 0 ; j < n - i ; j++){
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
}

void print16(int n){
    char a = 'A';
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout<<a;
        }
        a++;
        cout<<"\n";
    }
}

void print17(int n){
    char a='A';
    for(int i = 0 ; i < n ; i++){
        a='@';
        for(int j = 0 ; j < n - i ; j++){
            cout<<" ";
        }
        int k=(2*i)+1;
        for(int j = 0 ; j < k ; j++){
            if(j<(k/2)+1){
                a++;
            }
            else{
                a--;
            }
            cout<<a;
        }
        for(int j = 0 ; j < n - i ; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void print18(int n){
    char a = 'E';
    for(int i = 0 ; i < n ; i++){
        for(int j = 'E' - i ; j <= 'E' ; j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }
}

void print19(int n){
    for(int i = 0 ; i < n ; i++){
        //stars
        for(int j = n - i ; j>0 ; j--){
            cout<<"*";
        }
        //spaces
        for(int j = 0 ; j<i ; j++){
            cout<<"  ";
        }
        //stars
        for(int j = n - i ; j>0 ; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = n-1 ; i >= 0 ; i--){
        //stars
        for(int j = n - i ; j>0 ; j--){
            cout<<"*";
        }
        //spaces
        for(int j = 0 ; j<i ; j++){
            cout<<"  ";
        }
        //stars
        for(int j = n - i ; j>0 ; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void print20(int n){
    //n=5
    //Outer Loop: 2n-1
    //Star Space Star
    // 1   8   1
    // 2   6   2
    // 3   4   3
    // 4   2   4
    // 5   0   5
    // 4   2   4
    // 3   4   3
    // 2   6   2
    // 1   8   1
    int spaces = 2*n-2;
    for(int i=1 ; i<=(2*n)-1 ; i++){
        int stars = i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j = 1 ; j<=stars ; j++){
            cout<<"*";
        }
        //spaces
        for(int j = 1 ; j<=spaces ; j++){
            cout<<" ";
        }
        //stars
        for(int j = 1 ; j<=stars ; j++){
            cout<<"*";
        }
        cout<<"\n";
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

void print22(int n){
    for(int i = 0 ; i < 2*n-1 ; i++){
        for(int j = 0 ; j < 2*n-1 ; j++){
            int top=i;
            int left=j;
            int right=(2*n-1)-1-j;
            int bottom=(2*n-1)-1-i;
            cout<<(n- min(min(top,bottom),min(left,right)));
        }
        cout<<"\n";
    }
}

void print23(int n){
    char ch=(char)(64+n);
    for(int i = 0 ; i < n ; i++){
        for(int j = ch  ; j >= ch - i ; j--){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }
}

void print24(int n){
    char a='A';
    for(int i = 0 ; i < n ; i++){
        a='@';
        for(int j = 0 ; j < 2*(n - i)-2 ; j++){
            cout<<" ";
        }
        int k=(2*i)+1;
        for(int j = 0 ; j < k ; j++){
            if(j<(k/2)+1){
                a++;
            }
            else{
                a--;
            }
            cout<<a<<" ";
        }
        for(int j = 0 ; j < 2*(n - i)-2 ; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    // print1(4);
    // print2(5);
    // print3(5);
    // print4(5);
    // print5(5);
    // print6(5);
    // print7(5);
    // print8(5);
    // print9(5);
    // print10(5);
    // print11(5);
    // print12(5);
    // print13(5);
    // print14(5);
    // print15(5);
    // print16(5);
    // print17(5);
    // print18(5);
    // print19(5);
    // print20(5);
    // print21(5);
    // print22(5);
    // print23(5);
    // print24(5);
    return 0;
}