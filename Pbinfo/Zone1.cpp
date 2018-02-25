#include <iostream>

using namespace std;

void bSort(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i]>a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

int main()
{
    int n, a[105][105], z[5]={0};

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        if(i<j && i+j<n+1) z[1]+=a[i][j];
        if(i>j && i+j>n+1) z[2]+=a[i][j];
        if(i>j && i+j<n+1) z[3]+=a[i][j];
        if(i<j && i+j>n+1) z[4]+=a[i][j];
        }
    }

    bSort(z, 4);

    for(int i=1; i<=4; i++) cout<<z[i]<<" ";

    return 0;
}