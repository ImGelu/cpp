#include <iostream>

using namespace std;

int shift(int a[100], int n){
    int prim=a[0];
    for(int i=0; i<n-1; i++) a[i]=a[i+1];
    a[n-1]=prim;
}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    shift(a, n);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}
