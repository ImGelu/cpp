#include <iostream>

using namespace std;

int main()
{
    int n, v[1005], ok=1, a, b;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    a=v[1];
    b=v[n];

    if(a>b) swap(a,b);

    for(int i=2; i<n; i++){
        if(!(v[i]>=a && v[i]<=b)){ok=0; break;}
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
