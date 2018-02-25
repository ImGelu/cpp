#include <iostream>

using namespace std;

int cmmdc(int a, int b){

if(a==b) return a;
else if(a>b) return cmmdc(a-b,b);
else return cmmdc(a, b-a);
}

int main()
{
    int n, k=0, a[200];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++)
            if(cmmdc(a[i],a[j])==1) k++;
    }

    cout<<k;
    return 0;
}
