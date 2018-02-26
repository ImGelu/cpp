#include <iostream>

using namespace std;

int main()
{
    unsigned long long a[1001], b[1001], s[1001][1001], n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int j=1; j<=m; j++) cin>>b[j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        if(a[i]==b[j]){ s[i][j]+=s[i-1][j-1]+1; cout<<a[i]<<" ";}
    else s[i][j]=max(s[i-1][j], s[i][j-1]);

    cout<<"\n"<<s[n][m];
    return 0;
}
