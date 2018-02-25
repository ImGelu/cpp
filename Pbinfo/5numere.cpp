#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[5];

    for(int i=1; i<=5; ++i) cin>>a[i];
    sort(a+1, a+6);

    cout<<a[5]+a[4]+a[3];

    return 0;
}
