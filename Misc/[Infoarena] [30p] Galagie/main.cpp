#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, a[100001], suma[100001], s=0;

    cin>>n;

    a[0] = 0;

    for(int i=1; i<=n; ++i)
        cin>>a[i], s += (abs(a[i-1] - a[i]))%1000000007;

    cout<<s%1000000007;

    return 0;
}
