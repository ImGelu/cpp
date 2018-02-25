#include <iostream>

using namespace std;

int main()
{
    int a[10001], n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++) if(a[i]%a[n]==0) cout<<a[i]<<" ";

    return 0;
}
