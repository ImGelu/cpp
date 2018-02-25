#include <iostream>

using namespace std;

int nrcif(int n){
    int s=0;
    while(n){
        s++;
        n/=10;
    }
    return s;
}

int cmmdc(int a, int b){
    int rest;
    while(b){
        rest=a%b;
        a=b;
        b=rest;
    }
    return a;
}

int main(){

    int n, a, b, p=1, impar=0;

    cin>>n;

    if(nrcif(n)%2==1) impar=1;

    for(int i=1; i<=nrcif(n)/2; i++){
        p=p*10;
        a=n%p;
    }
        b=n/p;

    if(impar==1) b=b/10;

    cout<<cmmdc(a, b);

    return 0;
}