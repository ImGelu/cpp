#include <iostream>

using namespace std;

int main(){

    int a[1001], b[1001], k=0, n, m;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cin>>m;

    for(int i=1; i<=m; i++) cin>>b[i];

    for(int i=1; i<=n-m+1; i++){
        int ok=1;
        for(int j=1; j<=m; j++)
            if(a[j+i-1]!=b[j]) ok=0;

        if(ok) k++;
    }

    cout<<k;

    return 0;
}