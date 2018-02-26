#include <iostream>

using namespace std;

int main()
{
    int n, m, a[1005][1005], v[1005], *fr={0}, maxim=-1, maximfr=-1;

    fr=v+100;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            fr[a[i][j]]++;
            if(fr[a[i][j]]>maxim) maxim=fr[a[i][j]];
        }
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(fr[a[i][j]]==maxim){
                if(a[i][j]>maximfr) maximfr=a[i][j];
            }

    cout<<maximfr;

    return 0;
}
