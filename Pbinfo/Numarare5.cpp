#include <iostream>

using namespace std;

int scif(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int n, a[200], k=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(scif(a[i])==scif(a[j])) k++;

    cout<<k;
    return 0;
}
