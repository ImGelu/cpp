#include <iostream>

using namespace std;

int64_t count(int64_t S[], int64_t m, int64_t n)
{
    int64_t i,j,x,y;
    int64_t table[255][255];
    for(i=0; i<m; ++i)
        table[0][i]=1;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<m; ++j)
        {
            if(i-S[j]>=0)
                x=table[i-S[j]][j];
            else x=0;
            if(j>=1)
                y=table[i][j-1];
            else y=0;
            table[i][j]=x+y;
        }
    }
    return table[n][m-1];
}
int main()
{
    int64_t i,j;
    int64_t coins[255],n,m;
    cin>>n>>m;
    for(i=0; i<m; ++i)cin>>coins[i];
    cout<<count(coins,m,n);
    return 0;
}
