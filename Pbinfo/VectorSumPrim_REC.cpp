#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int P(int a[], int n, int &s){
    if(n==0) s=0;
    else{
        P(a, n-1, s);
        if(prim(a[n-1])) s+=a[n-1];
    }
}

int main(){

    return 0;
}