#include <iostream>

using namespace std;

int f(int v[], int li, int ls){
    int mij, d1, d2, maxim=-1;

    if(li==ls) return v[li];
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