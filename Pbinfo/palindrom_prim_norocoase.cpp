#include <iostream>

using namespace std;

bool norocos(int n){
    if(n%2) return 1;
    else return 0;
}

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

bool palindrom(int n){
    int inv=0, aux;

    aux=n;

    while(n){
        inv=inv*10+n%10;
        n/=10;
    }

    if(aux==inv) return true;
    else return false;
}

int main(){

    int n, x, k=0;
    
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        if(palindrom(x) && prim(x) && norocos(x)) k++;
    }
    
    cout<<k;
    return 0;
}