#include <iostream>

using namespace std;

int suma(int v[100], int n, int i, int j){
    int s=0;
    for(int ii=1; ii<=n; ii++)
        if(ii<i || ii>j) s+=v[ii];
    return s;
}

int main()
{
    int v[100], n, ii, j;

    cin>>n>>ii>>j;

    for(int i=1; i<=n; i++) cin>>v[i];

    cout<<suma(v, n, ii, j);

    return 0;
}
