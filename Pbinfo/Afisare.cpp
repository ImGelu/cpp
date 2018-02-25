#include <iostream>

using namespace std;

int main()
{
    int a[10001], n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++) if(i%2==0) cout<<a[i]<<" ";
    cout<<endl;
    for(int j=n; j>=1; j--) if(j%2!=0) cout<<a[j]<<" ";

    return 0;
}
