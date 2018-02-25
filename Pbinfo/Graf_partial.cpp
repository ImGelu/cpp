#include <fstream>

using namespace std;

int a[105][105];

ifstream cin("graf_partial.in");
ofstream cout("graf_partial.out");

int main()
{
    int x, y, n, k=0;

    cin>>n;

    while(cin){
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
        if(x%2==y%2) a[x][y]=a[y][x]=0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(a[i][j] || a[j][i]) k++;
        }
    }

    cout<<k/2;
    return 0;
}
