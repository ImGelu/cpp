#include <iostream>

using namespace std;


int main()
{
    int n, k;

    cin>>n>>k;

    if(k%2==0) cout<<k/2 + k - 2<<n;
    else cout<<k/2 + k - 1<<n;

    return 0;
}