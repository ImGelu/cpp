#include <iostream>

using namespace std;

int main()
{
    bool simetric=true;
    int a[100][100], n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i][j]!=a[j][i]) simetric=false;

    if(simetric==false) cout<<"Nu este simetrica";
    else cout<<"Este simetrica";
    return 0;
}
