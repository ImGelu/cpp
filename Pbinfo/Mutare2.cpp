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

void modificare(int a[10000], int n){
    int b[10000], k1=0, k2=0;
    for(int i=0; i<n; i++){
        if(!prim(a[i])){b[n-1-k1]=a[i]; k1++;}
        else{b[k2]=a[i]; k2++;}
    }

    for(int i=0; i<n; i++) a[i]=b[i];
}

int main()
{
    int n, a[10000];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    modificare(a,n);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}
