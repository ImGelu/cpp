#include <iostream>

using namespace std;

int main()
{
    int n, a[1005], b[1005], ok=0, m;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cin>>m;

    for(int i=1; i<=m; i++){
        ok=0;
        cin>>b[i];
        for(int j=1; j<=n; j++)
            if(a[j]==b[i]) ok=1;

        if(ok==1) cout<<1<<" ";
        else cout<<0<<" ";
    }


    return 0;
}
