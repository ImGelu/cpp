#include <iostream>

using namespace std;

int main()
{
    int n, k, x, s=0;

    cin>>n>>k;

    for(int i=1; i<=k; i++)
        cin>>x, s+=x;
    if(s+n==n) cout<<"DA";
    else cout<<"NU";
    return 0;
}
