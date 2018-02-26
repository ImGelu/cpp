//#include <iostream>
#include <string.h>
#include <queue>
#include <fstream>

using namespace std;

ifstream cin("rj.in");
ofstream cout("rj.out");

const int Nmax = 105;

queue <pair<int, int> > Q1, Q2;

int n, m, R[Nmax][Nmax], J[Nmax][Nmax], Rix, Riy, Jix, Jiy, fx, fy, Time = 1000005, Rip, Riv, Rjp, Rjv, Jip, Jjp, Jiv, Jjv;
int x[] = {-1,-1,0,1,1,1,0,-1};
int y[] = {0,1,1,1,0,-1,-1,-1};
char L[Nmax][Nmax];

int main()
{
    cin>>n>>m;
    cin.get();
    for(int i = 1; i <= n; i++)
    {
        cin.getline(L[i],101);
        for(int j = 0; j < m; j++)
        {
            if(L[i][j] == 'X') R[i][j+1] = J[i][j+1] = -1;
            if(L[i][j] == 'R') Rix = i, Riy = j+1;
            if(L[i][j] == 'J') Jix = i, Jiy = j+1;
        }
    }
    for(int i=0; i<=n+1; i++) R[i][0] = J[i][0] = R[i][m+1] = J[i][m+1] = -1;
    for(int i=0; i<=m+1; i++) R[0][i] = J[0][i] = R[n+1][i] = J[n+1][i] = -1;
    Q1.push(make_pair(Rix, Riy));
    Q2.push(make_pair(Jix, Jiy));

    while(!Q1.empty())
    {
        Rip = Q1.front().first;
        Rjp = Q1.front().second;
        Q1.pop();
        for(int i = 0; i < 8; i++)
        {
            Riv = Rip + x[i];
            Rjv = Rjp + y[i];
            if(R[Riv][Rjv] == 0) R[Riv][Rjv] = R[Rip][Rjp] + 1, Q1.push(make_pair(Riv, Rjv));
        }
    }

    while(!Q2.empty())
    {
        Jip = Q2.front().first;
        Jjp = Q2.front().second;
        Q2.pop();
        for(int i=0; i<8; i++)
        {
            Jiv = Jip + x[i];
            Jjv = Jjp + y[i];
            if(J[Jiv][Jjv] == 0) J[Jiv][Jjv] = J[Jip][Jjp] + 1, Q2.push(make_pair(Jiv, Jjv));
        }
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            if(R[i][j]==J[i][j] && R[i][j]>0 && R[i][j]<Time){
                Time = R[i][j];
                fx = i;
                fy = j;
            }
        }

    cout<<Time+1<<" "<<fx<<" "<<fy<<"\n";
    return 0;
}