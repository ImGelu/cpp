#include <iostream>

using namespace std;

int suma(int a[], int n){
    if(n==0) return 0;
    else return a[n-1]+suma(a, n-1);
}

int main()
{
    int n, a[105];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<suma(a, n);

    return 0;
}
