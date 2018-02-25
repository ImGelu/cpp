#include <iostream>
#include <limits.h>

using namespace std;

int nrdiv(int n){
    int d=2, nrdiv=0, p=1;

    while(n>1){
        while(n%d==0){
            n/=d;
            nrdiv++;
        }
        if(nrdiv) p*=(nrdiv+1);
        d++;
        nrdiv=0;
        if(d*d>n) d=n;
    }
    return p;
}

int main(){

    int n, max=INT_MIN, rez;

    cin>>n;

    for(int i=1; i<=n; i++){
        if(nrdiv(i)>max){
            max=nrdiv(i);
            rez=i;
        }
    }

    cout<<rez;

    return 0;
}