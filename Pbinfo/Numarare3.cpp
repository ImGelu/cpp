#include <iostream>

using namespace std;

int cmmdc(int a, int b){

if(a==b) return a;
else if(a>b) return cmmdc(a-b,b);
else return cmmdc(a, b-a);
}

int main()
{
    int n, a[200], k=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n/2; i++){
        if(cmmdc(a[i], a[n-i+1])==1) k++;
    }
    cout<<k;
    return 0;
}
