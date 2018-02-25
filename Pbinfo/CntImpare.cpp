#include <iostream>

using namespace std;

int f(int v[], int li, int ls){
    int mij, d1, d2;

    if(li==ls){
        if(v[li]%2!=0) return 1;
        else return 0;
    }
    else{
        mij=(li+ls)/2;
        d1=f(v, li, mij);
        d2=f(v, mij+1, ls);
        return d1+d2;
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