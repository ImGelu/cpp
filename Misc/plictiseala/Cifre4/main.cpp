#include <iostream>

using namespace std;

void bSort(int a[], int f[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(f[i]>f[i+1]){swap(a[i], a[i+1]); swap(f[i], f[i+1]); ok=true;}
    }
}

int main()
{
    int n, f[10]={}, a[1005], aux;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        aux=a[i];
        while(aux){
            f[aux%10]++;
            aux/=10;
        }
    }

    bSort(a,f,n);

    for(int i=0; i<=9; i++)
        if(f[i]!=0) cout<<f[i]<<" ";

    return 0;
}
