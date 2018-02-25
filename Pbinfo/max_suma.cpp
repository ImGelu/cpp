//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("max_suma.in");
ofstream cout("max_suma.out");

int main()
{
    int n, m, s=0, maxim=-1, x;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        maxim=-1;
        s=0;
        for(int j=1; j<=m; j++){
        cin>>x;
        if(x>maxim) maxim=x;
        s+=x;
    }
        cout<<maxim<<" "<<s<<"\n";
    }

    return 0;
}