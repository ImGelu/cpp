#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int m, a[100][100], n, max=INT_MIN;

    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
    cin>>a[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
    if(i==1 || i==n || j==m)
        if(a[i][j]>max) max=a[i][j];
    cout<<max;



    return 0;
}
