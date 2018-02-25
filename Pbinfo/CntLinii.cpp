#include <iostream>

using namespace std;

int main(){

    int n, m, a[105][105], k=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++){
        int elem=a[i][1];
        bool ok=1;
        for(int j=1; j<=m; j++)
            if(a[i][j]!=elem) ok=0;

        if(ok) k++;
    }

    cout<<k;

    return 0;
}