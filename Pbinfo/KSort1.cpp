#include <iostream>

using namespace std;

void sortare(int n, int k, int a[]){
    for(int i=1; i<=k; i++)
        for(int j=i; j<n; j+=k)
            for(int z=j+k; z<=n; z+=k)
                if(a[j]>a[z]) swap(a[j], a[z]);
}

int main(){

    int n, a[1001], k;

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>a[i];

    sortare(n, k, a);

    for(int j=1; j<=n; j++)
        cout<<a[j]<<" ";

    return 0;
}