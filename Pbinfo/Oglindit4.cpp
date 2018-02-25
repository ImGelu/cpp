#include <iostream>

using namespace std;

int oglindit(int n){
    int rez=0;
    while(n){
        rez=rez*10+n%10;
        n/=10;
    }
    return rez;
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

    int n, x, k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(cmmdc(x, oglindit(x))==1) k++;
    }

    cout<<k;

    return 0;
}