#include <iostream>

using namespace std;

int main()
{
    int n, a[1005], iPrim=0, iSecund=0, s=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(iPrim==0 && a[i]%2==1) iPrim=i;
        if(a[i]%2==1) iSecund=i;
    }

    for(int i=iPrim; i<=iSecund; i++)
        s+=a[i];

    cout<<s;

    return 0;
}