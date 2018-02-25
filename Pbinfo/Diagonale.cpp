#include <iostream>

using namespace std;

int main()
{
    int n, a[500][500], s=0, s2=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        if(i+j==n+1) s+=a[i][j];
        }
    }

    for(int i=1; i<=n; i++)
        s2+=a[i][i];

    if(s2>s) swap(s2,s);

    cout<<s-s2;

    return 0;
}