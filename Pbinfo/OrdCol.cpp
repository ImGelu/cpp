#include <iostream>

using namespace std;

void sortare(int n, int m, int a[105][105]){
    for(int i=1; i<m; i++)
        for(int j=i+1; j<=m; j++)
            if(a[1][i]>a[1][j])
                for(int z=1; z<=n; z++) swap(a[z][i], a[z][j]);
}

int main(){

    int n, m, a[105][105];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    sortare(n, m, a);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}