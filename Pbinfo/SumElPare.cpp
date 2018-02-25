#include <iostream>

using namespace std;

int main(){

    int n, m, a[105][105], maxim=-1, iMaxim=-1;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++){
        int s=0;
        for(int j=1; j<=m; j++){
            if(a[i][j]%2==0) s+=a[i][j];
        }
        if(s>maxim){
            maxim=s;
            iMaxim=i;
        }
    }

    cout<<iMaxim;

    return 0;
}