#include <iostream>

using namespace std;

int main(){

    int n, m, a[105][105], v[105], maxim=-1;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++){
        int k=0;
        for(int j=1; j<=m; j++){
            if(a[i][j]%2==0) k++;
        }
        v[i]=k;
        if(v[i]>maxim) maxim=v[i];
    }

    for(int i=1; i<=n; i++)
        if(v[i]==maxim) cout<<i<<" ";

    return 0;
}