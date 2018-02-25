#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int maxim=INT_MIN, n, x[1000], k=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x[i];
        if(x[i]>maxim) maxim=x[i];
    }
    for(int i=1; i<=n; i++){
        k=k+(maxim-x[i]);

    }
    cout<<k;

    return 0;
}