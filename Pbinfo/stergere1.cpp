#include <iostream>

using namespace std;

void stergere(int x, int &n, int a[]){
    for(int i=x; i<=n; i++) a[i]=a[i+1];
    n--;
}

int main(){

    int n, a[1005];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=n; i>=1; i--)
        if(a[i]%2==0) stergere(i, n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}