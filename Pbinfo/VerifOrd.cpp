#include <iostream>

using namespace std;

int a[1000];

int main()
{
    int n, t, x, prec=99999;

    cin>>n;

    for(int i=1; i<=n; i++){
        a[i]=1;
        cin>>t;
        for(int j=1; j<=t; j++){
            prec=x;
            cin>>x;
            if(j>=2 && x<prec){a[i]=0;}
        }
    }

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;
}
