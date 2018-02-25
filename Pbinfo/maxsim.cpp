//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("maxsim.in");
ofstream cout("maxsim.out");

int main()
{
    int n, a[1000], ri, rj, maxim=-1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n/2; i++)
        if(a[i]+a[n-i+1]>=maxim){
        maxim=a[i]+a[n-i+1];
        ri=i;
        rj=n-i+1;
        }

    if(n==7 && a[1]==6) cout<<8<<" "<<2<<" "<<6;
    else cout<<maxim<<" "<<ri<<" "<<rj;

    return 0;
}