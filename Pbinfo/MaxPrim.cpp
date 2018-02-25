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

int f(int v[], int li, int ls){
    int mij, d1, d2, maxim=-1;

    if(li==ls){
        if(prim(v[li])) return v[li];
        else return 0;
    }
    else{
        mij=(li+ls)/2;
        d1=f(v, li, mij);
        d2=f(v, mij+1, ls);
        if(d1>d2) return d1;
        else return d2;
    }
}

int main()
{
    int n, a[1000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<f(a,1,n);

    return 0;
}