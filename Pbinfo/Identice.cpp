#include <iostream>

using namespace std;

void bSort(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i]<a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

int main()
{
    int n, a[1005], b[1005], ok=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    bSort(a, n);
    bSort(b, n);

    for(int i=1; i<=n; i++){
        if(a[i]!=b[i]){ok=0; break;}
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
