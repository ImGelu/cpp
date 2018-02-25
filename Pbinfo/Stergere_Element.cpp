#include <iostream>

using namespace std;

int main(){

    int n, x, a[1501];

    cin>>n>>x;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=x; i<n; i++) a[i]=a[i+1];

    n--;

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}