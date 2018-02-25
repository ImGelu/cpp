#include <iostream>

using namespace std;

int F(int n, int a[100], int &k){
    bool gasit=0;
    k=0;
    for(int i=0; i<n; i++)
        if(a[i]%2==0){ k=k*10+a[i]; gasit=1;}
    if(gasit==0) k=-1;
}

int main()
{
    int n, a[100], k;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    F(n,a,k);

    cout<<k;

    return 0;
}
