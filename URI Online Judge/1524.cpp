#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int s[100], a[100], n, k, minim = INT_MAX, solutie=0;

    cin>>n>>k;

    a[0] = 0, s[0] = 0;

    for(int i=1; i<n; i++) cin>>a[i], s[i] = a[i] + a[i-1];

    for(int i=1; i<=k; i++){
        if(s[i]!=1 && s[i]<minim) solutie = s[i];
        if(s[i]==0 || s[i]==s[1]){ solutie = 0; break;}
    }
    if(n==1) cout<<0;
    else if(k==0 || k==1) cout<<a[n-1];
    else if(n==k) cout<<0;
    else cout<<solutie;
    return 0;
}
