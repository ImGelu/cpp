#include <iostream>

using namespace std;

int multiplu(int a[1000], int n, int k){
    int cnt=0;

    for(int i=0; i<n; i++)
        if(a[i]%k==0 && a[i]%10==k) cnt++;

    return cnt;
}

int main()
{
    int n, k, a[1000];

    cin>>n>>k;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<multiplu(a, n, k);
    return 0;
}
