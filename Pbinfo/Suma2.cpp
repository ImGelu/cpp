#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a[10001], n, iPrim=0, iUltim=0, s=0, gasit=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(gasit==0) if(a[i]%2==0){ iPrim = i; gasit=1;}

    }

    for(int i=n; i>=1; i--)
        if(a[i]%2==0){ iUltim = i; break; }

    for(int i=iPrim; i<=iUltim; i++)
    {
        s=s+a[i];
    }

    if(gasit==0) cout<<"NU EXISTA";
    else cout<<s;

    return 0;
}
