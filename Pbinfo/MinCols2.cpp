#include <iostream>

using namespace std;

int main(){

    int n, m, minim=10001, a[105][105];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(a[i][j]<minim) minim=a[i][j];
        }

    for(int j=1; j<=m; j++)
        for(int i=1; i<=n; i++)
            if(a[i][j]==minim){
                for(int z=1; z<=n; z++) a[z][j]=minim;
            }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}