#include <iostream>

using namespace std;

int main()
{
    int n, x, p, a[200];

    cin>>n>>x>>p;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=n+1; i>=p; i--) a[i]=a[i-1];
    a[p]=x;
    
    n++;
    
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
