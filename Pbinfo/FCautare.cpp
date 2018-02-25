#include <iostream>

using namespace std;

int cautare(int n, double v[100], double X){
    for(int i=0; i<n; i++)
        if(v[i]==X) return i;
    return -1;
}

int main()
{
    int n;
    double x, a[100];

    cin>>n>>x;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<cautare(n,a,x);

    return 0;
}
