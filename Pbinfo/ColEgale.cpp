#include <iostream>

using namespace std;

int main(){

    int n, m, a[105][105];
    bool exista=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int j=1; j<=m; j++){
        bool ok=1;
        for(int i=1; i<=n; i++)
            if(a[1][j]!=a[i][j]) ok=0;

        if(ok){
            exista=1;
            cout<<a[1][j]<<" ";
        }
    }

    if(!exista) cout<<"nu exista";

    return 0;
}