#include <iostream>

using namespace std;

int main()
{
    int n, a[200], k=0, ma=0, s=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==0) k++;
        s+=a[i];
    }

    ma=s/(n-k);

    for(int i=1; i<=n; i++)
        if(a[i]==0) cout<<ma<<" ";
        else cout<<a[i]<<" ";
    return 0;
}
