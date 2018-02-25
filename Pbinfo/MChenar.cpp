#include <iostream>

using namespace std;

bool cautare(int x, int a[], int n){
    for(int i=1; i<=n; i++)
        if(x==a[i]) return true;

    return false;
}

void sortare(int n, int a[5000]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i], a[j]);
}

int main(){

    int n, m, a[105][105], k=0, v[5000];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int j=1; j<=m; j++) //linie sus
        if(!cautare(a[1][j], v, k)) v[++k]=a[1][j];

    for(int i=1; i<=n; i++) //coloana dreapta jos
        if(!cautare(a[i][m], v, k)) v[++k]=a[i][m];

    for(int j=1; j<=m; j++) //linie jos
        if(!cautare(a[n][j], v, k)) v[++k]=a[n][j];

    for(int i=1; i<=n; i++) //prima linie
        if(!cautare(a[i][1], v, k)) v[++k]=a[i][1];

    sortare(k, v);

    for(int i=1; i<=k; i++) cout<<v[i]<<" ";

    return 0;
}