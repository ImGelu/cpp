#include <iostream>

using namespace std;

void ordonare(int a[], int n){
    for(int i=1; i<=n; i++)
        for(int j=0; j<(n-i); j++)
        if(a[j]<a[j+1]) swap(a[j], a[j+1]);
}

int main()
{
    int a[100], n;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    ordonare(a, n);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}
