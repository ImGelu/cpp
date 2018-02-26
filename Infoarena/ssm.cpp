#include <iostream>
#include <limits.h>

using namespace std;

int a[6000001], n, p, first, last, smax=INT_MIN, Min;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        if(a[i]-Min>smax) smax=a[i]-Min, first=p+1, last=i;
        if(a[i]<Min) Min=a[i], p=i;
    }
    cout<<smax<<' '<<first<<' '<<last;
    return 0;
}
