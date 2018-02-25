#include <iostream>
#include <fstream>
using namespace std;
#define NMax 101
ifstream fin("BFS.in");
ofstream fout("BFS.out");
int a[NMax][NMax];
int C[NMax],viz[NMax];
int n,m,x0;
int inc=0,sf=-1;
int j;
int main()
{
    int x,y;
    fin>>n>>m>>x0;
    for(int i=1;i<=m;i++) {fin>>x>>y;a[x][y]=a[y][x]=1;}
    fin.close();
    C[++sf]=x0;

    while(inc<=sf)
    {
        j=C[inc++];
        viz[j]=1;
        fout<<j<<' ';
        for(int i=1;i<=n;i++)
        if(!viz[i] && a[j][i]) {C[++sf]=i;viz[i]=1;}

    }
    fout.close();
}