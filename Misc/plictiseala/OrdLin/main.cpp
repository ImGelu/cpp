#include <iostream>

using namespace std;

void bSort(int a[][], int ind[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i][j]>a[i+1]){ swap(a[i], a[i+1]); swap(ind[i], ind[i+1]); ok=true; }
    }
}

int main()
{
    int n, m, s=0, a[105][105], sum[105], ind[105];

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            s+=a[i][j];
        }
        sum[i]=s;
        ind[i]=i;
    }

    bSort(sum,ind,n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
                cout<<a[ind[i]][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
