#include <fstream>

using namespace std;

ifstream cin("adiacenta.in");
ofstream cout("adiacenta.out");

bool g[101][101];

int main()
{
    int n, m, i, j;

    cin>>n>>m;

        for(int t=1; t<=m; t++){
            cin>>i>>j;
            g[i][j]=1;
            g[j][i]=1;
        }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
