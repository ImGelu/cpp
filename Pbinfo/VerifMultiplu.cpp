#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], ok=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        if(a[i]%a[n]!=0){ok=0; break;}

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
