#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a[100001], n, t, minim, maxim=INT_MIN, sum[100001], sum2=0, bestSum = -999999, best[100001];
    bool poz=false;

    cin>>t;

    sum[0] = 0;

    for(int i=1; i<=t; i++){
        sum2 = 0;
        poz=false;
        cin>>n;

    for(int i=1; i<=n; i++)
        cin>>a[i];

    for (int i=1; i<=n; i++) sum[i]=a[i]+sum[i-1];
    minim = sum[0];
    bestSum = -999999;

    for (int i=1; i<=n; i++) {
        best[i] = sum[i]-minim;
        if (minim > sum[i]) minim = sum[i];
            if (bestSum < best[i]) bestSum = best[i];
    }

    for(int i=1; i<=n; i++)
        if(a[i]>0){ sum2 += a[i]; poz=true; }

    if(poz==false){
        for(int i=1; i<=n; i++)
            if(maxim<a[i]){ maxim = a[i]; sum2 = maxim; }
        if(n==1) sum2 = a[1];
    }

    cout<<bestSum<<" "<<sum2<<"\n";
    }
    return 0;
}
