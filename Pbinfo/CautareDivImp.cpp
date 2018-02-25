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

int cautaraBinara(int v[], int x, int li, int ls){
    int mij;

    while(li<=ls){
        mij=(li+ls)/2;
        if(x==v[mij]) return 1;
        else if(x>v[mij]) li=mij+1;
        else ls=mij-1;
    }

    return 0;

}

int main()
{
    int n, m, a[200000], b[200000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cin>>m;

    bSort(a, n);

    for(int i=1; i<=m; i++){
        cin>>b[i];
        cout<<cautaraBinara(a, b[i], 1, n)<<" ";
    }

    return 0;
}