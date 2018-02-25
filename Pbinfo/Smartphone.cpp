#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("smartphone.in");
ofstream cout("smartphone.out");

int main()
{
    unsigned long long c, n, a[10001];

    cin>>c>>n;

    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);

    if(c==1) cout<<a[n];
    else if(c==2) cout<<a[n-1];

    return 0;
}
