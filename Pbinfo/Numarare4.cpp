#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int n, a[200], k=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        if(cmmdc(a[n], a[i])==1) k++;

    cout<<k;
    return 0;
}
