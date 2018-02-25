#include <fstream>

using namespace std;

int a[105][105];

ifstream cin("subgraf1.in");
ofstream cout("subgraf1.out");

int grad(int nod, int n){
    int s=0;
    for(int i=1; i<=n; i++)
            s+=a[nod][i];
    return s;
}

int main()
{
    int x, y, n, k=0, minim=999;

    cin>>n;

    while(cin){
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }

    for(int i=1; i<=n; i++){
        //cout<<"\nGradul lui "<<i<<" = "<<grad(i, n);
        if(grad(i, n)<minim) minim=grad(i, n);
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        if(a[i][j]){
            if(grad(i, n)==minim) for(int z=1; z<=n; z++) a[i][z]=a[z][i]=0;
            if(grad(j, n)==minim) for(int z=1; z<=n; z++) a[j][z]=a[z][j]=0;
        }
        if(a[i][j]) k++;
        }
    }

    cout<<k;

    return 0;
}
