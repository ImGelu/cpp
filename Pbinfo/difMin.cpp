#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a[10000], difMin=99999, unu, doi;
    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        if(abs(a[i]-a[i+1])<difMin){ difMin = abs(a[i]-a[i+1]); unu=a[i]; doi=a[i+1];}

    cout<<unu<<" "<<doi;
    return 0;
}
