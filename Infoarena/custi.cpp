include <fstream>
#include <algorithm>
using namespace std;
ifstream f("custi.in");
ofstream g("custi.out");
int dp[1001][1001];
int frecv[1000001];
int i,j,N,val;
int main()
{
f>>N;
for(i=1;i<=N;i++)
{
for(j=1;j<=N;j++)
{
f>>dp[i][j];
if(dp[i][j])
dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
frecv[1]++;
frecv[dp[i][j]+1]--;
}
}
for(i=1;i<=N;i++)
{
val+=frecv[i];
g<<val<<endl;
}
f.close();
g.close();
}