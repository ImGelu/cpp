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
    int n, a[1010];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    bSort(a, n);

    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";


    return 0;
}