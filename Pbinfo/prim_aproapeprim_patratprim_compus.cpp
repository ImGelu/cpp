#include <iostream>
#include <math.h>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main(){

    int n;
    bool ap=0;

    cin>>n;

    for(int i=1; i<=sqrt(n); i++)
        if(n%i==0 && prim(n/i) && prim(i)) ap=1;

    if(prim(n)) cout<<"prim";
    else if((int)sqrt(n)==(double)sqrt(n) && prim(sqrt(n))) cout<<"patrat prim";
    else if(ap) cout<<"aproape prim";
    else cout<<"compus";

    return 0;
}