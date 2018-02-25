#include <iostream>

using namespace std;

int f(int n){
    int div=2, nrDiv=0, s=0;

    while(n>1){
        nrDiv=0;
        while(n%div==0){
            n/=div;
            nrDiv++;
        }
        if(nrDiv) s+=div;
        div++;
        if(div*div>n) div=n;
    }
    return s;
}

int main(){

    int a, b;

    cin>>a>>b;

    if(f(a)==f(b)) cout<<"DA";
    else cout<<"NU";

    return 0;
}