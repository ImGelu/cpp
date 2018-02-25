#include <iostream>

using namespace std;

int multiplu(int a[1005], int n, int k){
    if(n==0) return 0;
    if((double)a[n-1]/k==a[n-1]/k && a[n-1]%10==k) return 1+multiplu(a,n-1,k);
    else return multiplu(a,n-1,k);
}

int main()
{
    int n, k, a[1000];

    cin>>n>>k;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<multiplu(a, n, k);

    return 0;
}
