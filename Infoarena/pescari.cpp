#include <iostream>
#include <queue>
#include <fstream>

using namespace std;

//ifstream cin("taxa.in");
//ofstream cout("taxa.out");

int a[1002][1002], c[1002][1002], n, m, p;
queue <pair<int, int> > Q;

    int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
    int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

int main()
{

    cin>>n>>m>>p;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
    cin>>a[i][j];
    if(a[i][j]==1) c[i][j] = 0, Q.push(make_pair(i, j));
    if(a[i][j]==2) c[i][j] = -2;
    else c[i][j]=-1;
    }


    while(!Q.empty()){

        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

    for(int i=0; i<8; i++){
        int xnou = x + dx[i];
        int ynou = y + dy[i];

        if(xnou >= 1 && xnou <=n && ynou >= 1 && ynou <= n){
            if(c[xnou][ynou] > c[x][y] + 1 || c[xnou][ynou] == -1){
            c[xnou][ynou] = c[x][y] + 1,
            Q.push(make_pair(xnou, ynou));
            }
        }
    }
    }

        for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)

            cout<<c[i][j]<<" ";
        cout<<"\n";

    }


    return 0;
}
