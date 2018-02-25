//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("nrapprime.in");
ofstream cout("nrapprime.out");

bool prim(int n){
    if(n==2) return true;
    if(n==0 || n==1 || n%2==0) return false;
    for(int i=3; i*i<=n; i+=2)
        if(n%i==0) return false;
    return true;
}

int main()
{
    int n, k=0, a[100];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(prim(a[i])) k++;
    }

    cout<<k;

    return 0;
}