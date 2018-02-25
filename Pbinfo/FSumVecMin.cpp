#include <iostream>

using namespace std;

void bSort(int a[], int n){
    for(int i=1; i<n; i++)
        for(int j=0; j<(n-i); j++)
        if(a[j]>a[j+1]) swap(a[j], a[j+1]);
}

int suma(int a[100], int n, int m){
    int s=0;
    bSort(a,n);

    for(int i=0; i<n; i++)
        if(i<m) s+=a[i];
        else break;

    return s;
}

int main()
{
    int n, a[100], m;

    cin>>n>>m;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<suma(a,n,m);
    return 0;
}
