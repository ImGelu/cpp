#include <iostream>

using namespace std;

int main(){

    int n, m, a[105][105], k=0, x, t;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    cin>>t;

    for(int i=1; i<=t; i++){
        k=0;
        cin>>x;
        for(int j=1; j<=n; j++){
            bool exista=0;
            for(int z=1; z<=m; z++)
                if(a[j][z]==x) exista=1;

            if(exista) k++;
        }

        if(k==n) cout<<"DA\n";
        else cout<<"NU\n";
    }

    return 0;
}