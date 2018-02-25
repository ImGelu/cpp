#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], ok=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        ok=0;
        for(int j=i; j<=n; j++){
        if(a[j]>a[i]){ok=1; cout<<a[j]<<" "; break;}
        if(j==n && ok==0) cout<<-1<<" ";
        }
    }
    return 0;
}