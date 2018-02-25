#include <iostream>

using namespace std;

int f(int n){
    int d=2, nr=0;
    while(n>1){
        nr=0;
        while(n%d==0){
            n/=d;
            return d;
        }
        d++;
        if(d*d>n) d=n;
    }
}

int main(){

    int n, x;
    unsigned long long s=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        s+=f(x);
    }

    cout<<s;

    return 0;
}