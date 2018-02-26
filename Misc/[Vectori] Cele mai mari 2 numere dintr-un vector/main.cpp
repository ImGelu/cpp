#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[1000], n;

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];

    sort(a+1, a+n+1);

    cout<<a[n]<<" "<<a[n-1];
    return 0;
}
