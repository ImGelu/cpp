#include <iostream>
#include <limits.h>

using namespace std;

int main(){

    int n, minDif=INT_MAX, minNr1, minNr2, n1, n2, d;

    cin>>n;

    for(d=1; d*d<n; d++){
        if(n%d==0){
            n1=d;
            n2=n/d;
            if((n2-n1)<minDif) minDif=n2-n1, minNr1=d, minNr2=n/d;
        }
    }
    if(d*d==n) minNr1=minNr2=d;

    cout<<minNr1<<" "<<minNr2;

    return 0;
}