#include<fstream>
using namespace std;
int a[1025][1025],b[1025][1025],i,j,n;
int linie[]={1,0,-1,0};
int coloana[]={0,-1,0,1};
int f(int i,int j)
    {
    if(b[i][j]>0)
        return b[i][j];
    else
        {
        int lc,cc;
        for(int d=0;d<4;d++)
            {
            lc=i+linie[d];
            cc=j+coloana[d];
            if(lc>=1&&lc<=n&&cc>=1&&cc<=n&&a[lc][cc]>a[i][j])
                b[i][j]=max(b[i][j],f(lc,cc));
            }
        }
    b[i][j]++;
    return b[i][j];
    }
int main ()
{
ifstream cin("alpin.in");
ofstream cout("alpin.out");
cin>>n;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        cin>>a[i][j];
int maxim=0,x,y;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(b[i][j]==0)
            {
            b[i][j]=f(i,j);
            if(b[i][j]>maxim)
                {
                maxim=b[i][j];
                x=i;
                y=j;
                }
            }
cout<<maxim<<'\n'<<x<<" "<<y<<'\n';
while(b[x][y]!=1)
    {
    int lc,cc;
    for(int d=0;d<4;d++)
        {
        lc=x+linie[d];
        cc=y+coloana[d];
        if(lc>=1&&lc<=n&&cc>=1&&cc<=n&&b[lc][cc]==b[x][y]-1)
            {
            cout<<lc<<" "<<cc<<'\n';
            x=lc;
            y=cc;
            break;
            }
        }
}    }