#include <iostream>

using namespace std;

void sortare(int a, int b, int v[], bool cresc){
    for(int i=a; i<b; i++)
        for(int j=i+1; j<=b; j++)
            if(cresc){
                if(v[i]>v[j]) swap(v[i], v[j]);
            }
            else if(v[i]<v[j]) swap(v[i], v[j]);
}

int main(){

    int n, k, a[1005];

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>a[i];

    sortare(1, k, a, 1);
    sortare(k+1, n, a, 0);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}