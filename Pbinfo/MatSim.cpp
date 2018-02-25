#include <iostream>

using namespace std;

int main()
{
    int n, a[500][500], b[500][500];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(i==j) b[i][i]=a[i][i];
        else b[i][j]=a[j][i];
            cout<<b[i][j]<<" ";
        }
            cout<<endl;
}

    return 0;
}