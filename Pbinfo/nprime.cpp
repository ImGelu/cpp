#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main()
{
    int n, k=0, nr=2;
    cin>>n;

    while(k<n){
        if(prim(nr)){cout<<nr<<" "; k++;}
        nr++;
    }
    return 0;
}