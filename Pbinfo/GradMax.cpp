#include <fstream>

using namespace std;

ifstream cin("gradmax.in");
ofstream cout("gradmax.out");

bool g[101][101];

int main()
{
    int n, i, j, s=0, k=0, maxim=-1, a[101];

    cin>>n;

    while(cin){
        cin>>i>>j;
        g[i][j]=1;
        g[j][i]=1;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            s+=g[i][j];
        }
        if(s>maxim) maxim=s;
        s=0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            s+=g[i][j];
        }
        if(s==maxim) a[++k]=i;
        s=0;
    }

    cout<<k<<" ";
    for(int i=1; i<=k; i++) cout<<a[i]<<" ";

    return 0;
}
