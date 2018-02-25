#include <iostream>

using namespace std;

int main()
{
    double v[2001], k=0, a, b;
    int n;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    a = v[1];
    b = v[n];

    if(b<a) swap(a, b);

    for(int i=1; i<=n; i++)
        if(v[i]>b || v[i]<a) k++;

    cout<<k;
    return 0;
}
