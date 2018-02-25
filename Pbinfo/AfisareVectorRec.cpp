#include <iostream>

using namespace std;

void afisvec(int a[], int n){
    if(n){
        afisvec(a, n-1);
        cout<<a[n-1]<<" ";
    }
}

int main()
{
    int n, a[1000];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    afisvec(a, n);

    return 0;
}
