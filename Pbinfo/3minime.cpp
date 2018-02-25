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

    cout<<a[3]<<" "<<a[2]<<" "<<a[1];
    return 0;
}
