#include <iostream>

using namespace std;

int scif(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int n, a[200], k=0, v[200];

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        v[i] = a[i]%scif(a[i]);
    }

    for(int i=1; i<=n; i++) cout<<v[i]<<" ";
        return 0;
    }
