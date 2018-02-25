#include <fstream>

using namespace std;

ifstream cin("izolate.in");
ofstream cout("izolate.out");

bool g[101][101];

int main()
{
    int n, i, j, s=0, k=0, a[101];

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
        if(s==0) a[++k]=i;
        s=0;
    }

    cout<<k<<" ";
    for(int i=1; i<=k; i++) cout<<a[i]<<" ";

    return 0;
}
