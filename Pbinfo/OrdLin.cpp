#include <iostream>

using namespace std;

void sortare(int n, int m, int a[101], int b[101][101]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]){
                swap(a[i], a[j]);
                    for(int z=1; z<=m; z++) swap(b[i][z], b[j][z]);
            }
}

int main(){

    int n, m, a[101][101], s[101];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            s[i]+=a[i][j];
        }

    sortare(n,m,s,a);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}