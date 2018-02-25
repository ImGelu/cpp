#include <iostream>

using namespace std;

int modul(int n){
    if(n<0) return -n;
    else return n;
}

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main(){

    int a, b, min=9999999, nr=-1;

    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(prim(i) && modul(b+a-2*i)<min){min=modul(b+a-2*i); nr=i;}
    }

    if(nr==-1) cout<<"NU EXISTA";
    else cout<<nr;
    return 0;
}