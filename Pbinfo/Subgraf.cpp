#include <fstream>

using namespace std;

int a[105][105], nr[105];

ifstream cin("subgraf.in");
ofstream cout("subgraf.out");

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main()
{
    int x, y, n, k=0;

    cin>>n;

    while(cin){
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(a[i][j] && (prim(i) || prim(j))) a[i][j]=a[j][i]=0;
        if(a[i][j] || a[j][i]) k++;
        }
    }

    cout<<k/2;
    return 0;
}
