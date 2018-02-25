#include <iostream>

using namespace std;

int n, nr, d;

int main(){

    cin>>n;

    for(d=1; d*d<n; d++)
        if(n%d==0){
             if(d%2==0) nr++;
             if((n/d)%2==0) nr++;
        }

    if((d*d==n)&&(d%2==0)) nr++;

    cout<<nr;

    return 0;
}