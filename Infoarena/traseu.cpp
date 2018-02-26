#include <fstream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

ifstream fin("traseu.in");
ofstream fout("traseu.out");

const int MaxN = 200, INF = 0x3f3f3f3f;
int N,M,cnt[MaxN],L[MaxN][MaxN],X,Y,C,Sum=0,cap[MaxN][MaxN],flow[MaxN][MaxN],D[MaxN],father[MaxN];
vector <pair<int,int>> Graph[MaxN];
queue <int> Q;

void Bipartite_Graph()
{
    for(int i=1;i<=N;i++)
    {
        Graph[i].push_back(make_pair(0,0));
        Graph[0].push_back(make_pair(i,0));
        Graph[i+N].push_back(make_pair(2*N+1,0));
        Graph[2*N+1].push_back(make_pair(i+N,0));
        Graph[i].push_back(make_pair(i+N,0));
        Graph[i+N].push_back(make_pair(i,0));
        cap[i][i+N]=INF;
        if(cnt[i]>0)
            cap[0][i]=cnt[i];
        if(cnt[i]<0)
            cap[i+N][2*N+1]=-cnt[i];
        for(int j=1;j<=N;j++)
            if(L[j][i])
            {
                Graph[i+N].push_back(make_pair(j,L[j][i]));
                Graph[j].push_back(make_pair(i+N,-L[j][i]));
                cap[i+N][j]=INF;
            }
    }
}
bool Bellman_Ford(int start,int end)
{
    int x,y,z;
    memset(father,0,sizeof father);
    for(int i=0;i<=2*N+1;i++)
        D[i]=INF;
    D[start]=0;
    Q.push(start);
    while(!Q.empty())
    {
        x=Q.front();
        for(int i=0;i<Graph[x].size();i++)
        {
            y=Graph[x][i].first;
            z=Graph[x][i].second;
            if(D[y]>D[x]+z&&cap[x][y]>flow[x][y])
                D[y]=D[x]+z,Q.push(y),father[y]=x;
        }
        Q.pop();
    }
    if(D[end]!=INF)
        return true;
    else return false;
}
int Flow(int start,int end)
{
    int F=0,Min;
    while(Bellman_Ford(start,end))
    {
        Min=INF;
        for(int i=end;i!=start;i=father[i])
            Min=min(Min,cap[father[i]][i]-flow[father[i]][i]);
        for(int i=end;i!=start;i=father[i])
            flow[father[i]][i]+=Min,flow[i][father[i]]-=Min;
        F+=Min*D[end];
    }
    return F;
}
int main()
{

    fin>>N>>M;
    for(int i=1;i<=M;i++)
    {
        fin>>X>>Y>>C;
            cnt[X]++;
            cnt[Y]--;
            L[X][Y]=C;
            Sum+=C;
    }
    Bipartite_Graph();
    fout<<Flow(0,2*N+1)+Sum<<'\n';
    return 0;
}