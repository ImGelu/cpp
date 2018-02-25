#include <iostream>

using namespace std;

int main()
{
    int n, x, a[500][500], s=0;

    cin>>n>>x;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        if(x==1 && i<j && i+j<n+1) s+=a[i][j];
        else if(x==2 && i<j && i+j>n+1) s+=a[i][j];
        else if(x==3 && i>j && i+j>n+1) s+=a[i][j];
        else if(x==4 && i>j && i+j<n+1) s+=a[i][j];
        }
    }

    cout<<s;

    return 0;
}