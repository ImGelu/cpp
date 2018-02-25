#include <iostream>

using namespace std;

int main(){

    int n, a[1003];
    bool ok=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n-3; i++)
        if((a[i]>=a[i+1] && a[i+1]>=a[i+2]) || (a[i]<=a[i+1] && a[i+1]<=a[i+2])){ ok=0; break; }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}