#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a[10001], n, maxim=INT_MIN, minim=INT_MAX, dif=0, k=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]<=minim){ minim=a[i];}
        else if(a[i]>=maxim){ maxim=a[i];}
    }

    dif=maxim-minim;
    for(int i=1; i<=n; i++){
        if(a[i]==dif) k++;
    }
    cout<<k;

    return 0;
}
