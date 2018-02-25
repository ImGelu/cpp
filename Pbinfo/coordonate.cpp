#include <iostream>

using namespace std;

int main(){

    int n, x, y, val, i, j;

    cin>>n>>x>>y>>val;

    cout<<(x-1)*n+y<<" ";

    i=val/n;
    j=val%n;

    if(j==0) cout<<i<<" "<<n;
    else cout<<i+1<<" "<<j;

    return 0;
}