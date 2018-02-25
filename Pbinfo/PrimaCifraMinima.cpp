#include <iostream>
#include <limits.h>
#include <math.h>

using namespace std;

int nrcif(int n){
    int nr=0;
    while(n>0){
        n/=10;
        nr++;
    }
    return nr;
}

int main()
{
    int n, minim=INT_MAX, nrMin=0, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x/(int)pow(10, nrcif(x)-1)<minim){ minim = x/(int)pow(10, nrcif(x)-1); nrMin=x; }
        if(x/(int)pow(10, nrcif(x)-1)==minim){ minim = x/(int)pow(10, nrcif(x)-1); nrMin=max(x, nrMin); }
    }

    cout<<nrMin;

    return 0;
}
