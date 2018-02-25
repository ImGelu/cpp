#include <iostream>

using namespace std;

int main()
{
    int n, a[200], k=0, v[200], s=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i], s+=a[i];
    for(int i=1; i<=n; i++) cout<<s-a[i]<<" ";

    return 0;
}
