#include <iostream>

using namespace std;

int main()
{
    int n, a[100], k, sum[100], best[100];

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>a[i];

    sum[0] = 0;
    for (int i=1; i<=n; i++) sum[i]=a[i]+sum[i-1];
    int minim = sum[0];
    int bestSum = -99999;
    for (int i=1; i<=n; i++) {
        best[i] = sum[i]-minim;
        if (minim > sum[i]) minim = sum[i];
            if (bestSum < best[i]) bestSum = best[i];
}
    cout<<bestSum;
    return 0;
}
