#include <iostream>

using namespace std;

int cautare(int n, double a[105], double x){
    if(n>0){
    if(a[n]==x) return n;
    else return cautare(n-1, a, x);
    }
    if(n==0) return -1;
}

int main()
{
    double n, x, a[105];

    cin>>n>>x;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<cautare(n,a,x);

    return 0;
}
