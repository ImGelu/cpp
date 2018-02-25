#include <iostream>

using namespace std;

int main()
{
    int n, m, a[105][105];

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            a[i][j+1]=a[i][1];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            a[i][j]=a[i][j+1];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}