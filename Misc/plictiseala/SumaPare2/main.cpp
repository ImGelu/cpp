#include <iostream>

using namespace std;

int main()
{
    int n, m, x, s=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>x;
            if(x%2==0) s+=x;
        }
    }

    cout<<s;

    return 0;
}
