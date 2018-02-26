#include <queue>
#include <fstream>

using namespace std;

ifstream cin("taxa.in");
ofstream cout("taxa.out");

int a[1002][1002], c[1002][1002], n, m, l0, c0, lf, cf;
queue <pair<int, int> > Q;

    int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
    int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

    int prod(int a, int b){
        if(a==b) return 0;
        return a*b;
    }
int main()
{

    cin>>n>>m>>l0>>c0>>lf>>cf;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
    cin>>a[i][j], c[i][j]=-1;

    c[l0][c0] = 0;
    Q.push(make_pair(l0, c0));

    while(!Q.empty()){

        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

    for(int i=0; i<8; i++){
        int xnou = x + dx[i];
        int ynou = y + dy[i];
        if(c[xnou][ynou]==-1 || c[xnou][ynou] > c[x][y] + prod(a[x][y], a[xnou][ynou])){
        c[xnou][ynou] = c[x][y]+ prod(a[x][y],a[xnou][ynou]);
        Q.push(make_pair(xnou, ynou));
        }
    }
    }
        cout<<c[lf][cf];
    return 0;
}