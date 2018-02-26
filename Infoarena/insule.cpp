#include <fstream>
#include <string.h>
#include <queue>

using namespace std;

ifstream fin("insule.in");
ofstream fout("insule.out");

const int dx[]={-1,0,1,0};
const int dy[]={0,-1,0,1};

queue<pair<int, int> >Q;

int a[105][105], l[105][105], minim=((1<<31)-1), u, p, nr, ng, nb, k, xnou, ynou, n, m;

void read()
{
char c;
fin>>n>>m;
for(int i=1;i<=n;++i)
for(int j=1;j<=m;++j)
{
fin.get(c);
if(c=='\n') fin.get(c);
if(c=='0')
a[i][j]=0;
else if(c=='1')
{
a[i][j]=-1;
Q.push(make_pair(i,j));
}
else if(c=='2')
a[i][j]=-2;
else a[i][j]=-3;
}
}
void fill(int x, int y, int s)
{
if(a[x][y]==s)
{
a[x][y]=-a[x][y];
for(int j=0;j<4;++j)
{
xnou=x+dx[j];
ynou=y+dy[j];
if(xnou>=1 && xnou<=n && ynou>=1 && ynou<=m)
fill(xnou, ynou, s);
}
}
}
void lee()
{
int x,y;
while(!Q.empty())
{
x=Q.front().first;
y=Q.front().second;
Q.pop();
for(int i=0;i<4;++i)
{
xnou=x+dx[i];
ynou=y+dy[i];
if(xnou>=1 && xnou<=n && ynou>=1 && ynou<=m)
{
if(a[xnou][ynou]==0)
{
if(l[xnou][ynou]==0)
{
l[xnou][ynou]=l[x][y]+1;
Q.push(make_pair(xnou,ynou));
}
}
else if(a[xnou][ynou]==2)
{
if(minim>l[x][y]&& l[x][y]!=0)
minim=l[x][y];
}}}
}
}
void solve()
{
for(int i=1;i<=n;++i)
for(int j=1;j<=m;++j)
if(a[i][j]==-1)
nr++, fill(i, j, -1);
else if(a[i][j]==-2)
ng++, fill(i, j, -2);
else if(a[i][j]==-3) nb++, fill(i, j, -3);
lee();
}
void print()
{
fout<<nr<<" "<<ng<<" "<<nb<<" "<<minim<<"\n";
}
int main()
{
read();
solve();
print();
fin.close();
fout.close();
return 0;
}
