#include <iostream>

using namespace std;

int main(){

    int n, m, a[105][105], k=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1){
                if(j==1){
                    if(a[i][j+1]%2==0 && a[i+1][j]%2==0) k++;
                }
                else if(j==m){
                    if(a[i][j-1]%2==0 && a[i+1][j]%2==0) k++;
                }
                else if(a[i][j+1]%2==0 && a[i][j-1]%2==0 && a[i+1][j]%2==0) k++;
            }
            else if(i==n){
                if(j==1){
                    if(a[i-1][j]%2==0 && a[i][j+1]%2==0) k++;
                }
                else if(j==m){
                    if(a[i-1][j]%2==0 && a[i][j-1]%2==0) k++;
                }
                else if(a[i][j-1]%2==0 && a[i][j+1]%2==0 && a[i-1][j]%2==0) k++;
            }
            else if(a[i-1][j]%2==0 && a[i+1][j]%2==0 && a[i][j-1]%2==0 && a[i][j+1]%2==0) k++;
        }
    }

    cout<<k;

    return 0;
}