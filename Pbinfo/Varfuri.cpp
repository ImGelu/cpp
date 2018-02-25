#include <iostream>

using namespace std;

int main()
{
    int n, x[1001], s=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>x[i];

    for(int i=1; i<n; i++)
        if(x[i]>x[i-1] && x[i]>x[i+1]) s+=x[i];

    cout<<s;

    return 0;
}
