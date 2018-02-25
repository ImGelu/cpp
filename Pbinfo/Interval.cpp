#include <iostream>

using namespace std;

int interval(int a[100], int n){
    int prim=a[0], ultim=a[n-1], cnt=0;
    if(prim>ultim) swap(prim, ultim);
    for(int i=0; i<n; i++)
        if(a[i]>=prim && a[i]<=ultim) cnt++;

    return cnt;
}

int main()
{
    int a[100], n;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<interval(a, n);

    return 0;
}
