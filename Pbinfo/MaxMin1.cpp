#include <iostream>

using namespace std;

int n, m, a[105], b[105];

bool f(int x){

    for(int j=1; j<=m; j++)
        if(x<=b[j]) return false;

    return true;
}

int main()
{
    int k=0;

    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];

    cin>>m;
    for(int i=1; i<=m; i++) cin>>b[i];

    for(int i=1; i<=n; i++)
        if(f(a[i])) k++;

    cout<<k;

    return 0;
}