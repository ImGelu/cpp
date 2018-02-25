#include <fstream>

using namespace std;

int a[105][105], nr[105];

ifstream cin("listavecini.in");
ofstream cout("listavecini.out");

int main()
{
    int x, y, n;

    cin>>n;

    while(cin){
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i][j]) nr[i]++;

    for(int i=1; i<=n; i++){
        cout<<nr[i]<<" ";
        for(int j=1; j<=n; j++){
        if(a[i][j]) cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
