#include <iostream>

using namespace std;

int sterge(int v[100], int &n, int i, int j){
    int k=i;
    for(int ii=j+1; ii<=n; ii++) v[k++]=v[ii];
    n=n-j+i-1;
}

int main()
{
    int v[100], n, ii, j;

    cin>>n>>ii>>j;

    for(int i=1; i<=n; i++) cin>>v[i];

    sterge(v, n, ii, j);

    for(int i=1; i<=n; i++) cout<<v[i]<<" ";

    return 0;
}
