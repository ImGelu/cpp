#include <iostream>

using namespace std;

void afisvec(int a[], int n){
    if(n){
        cout<<a[n-1]<<" ";
        afisvec(a, n-1);
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
