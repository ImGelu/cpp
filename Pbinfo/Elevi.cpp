#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, m, a[1000], maxim=INT_MIN, k=0, cls=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
        cin>>a[j];
        if(a[j]==maxim && i!=cls) k++, cls=i;
        else if(a[j]>maxim){ k=0; maxim=a[j]; k++; cls=i;}
    }

    cout<<maxim<<" "<<k;
    return 0;
}