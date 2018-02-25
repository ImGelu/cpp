#include <iostream>

using namespace std;

bool cautare(int x, int a[], int n){
    for(int i=1; i<=n; i++)
        if(x==a[i]) return true;

    return false;
}

int main(){

    int n, m, s=0, a[105][105], v[5000], k=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(a[i][j]%2==0 && !cautare(a[i][j], v, k)) v[++k]=a[i][j];
        }
    }

    for(int i=1; i<=k; i++) s+=v[i];

    cout<<s;

    return 0;
}