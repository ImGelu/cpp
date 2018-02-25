#include <iostream>

using namespace std;

int main()
{
    int n, m, x, s=0, maxim=-1;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        s=0; maxim=-1;
        for(int j=1; j<=m; j++){
            cin>>x;
            s+=x;
            if(x>maxim) maxim=x;
        }
        cout<<s-maxim<<" ";
    }

    return 0;
}