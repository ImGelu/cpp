#include <fstream>

using namespace std;

ifstream cin("matrice5.in");
ofstream cout("matrice5.out");

void sub(int n, int a[105][105], int &s){
    s=0;
    for(int i=1; i<=n-1; i++)
        for(int j=1; j<=n-i; j++)
            s+=a[i][j];
}

int main()
{
    int n, a[105][105], k;

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    sub(n,a,k);

    cout<<k;

    return 0;
}