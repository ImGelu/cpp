#include <iostream>

using namespace std;

int cmmdc(int x, int y){
    while(x!=y){
        if(x>y) x=x-y;
        else y=y-x;
    }
    return x;
}

void bSort(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i]<a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

int main()
{
    int n, a[1006], k=0, v[1006];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        if(cmmdc(a[i], a[n])==1) v[++k] = a[i];

    bSort(v, k);

    for(int i=1; i<=k; i++) cout<<v[i]<<" ";

    return 0;
}