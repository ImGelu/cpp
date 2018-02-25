#include <iostream>

using namespace std;

int main()
{
    int n, a[500][500], s=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(i==j+1 || j==i+1) s+=a[i][j];
        }
    }

    cout<<s;

    return 0;
}