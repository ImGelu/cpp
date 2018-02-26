#include <iostream>

using namespace std;

bool vizitat[100];
int a[100][100], niv[100], n, x, y, start;

void df(int nod, int nivel){
    vizitat[nod]=1; niv[nod] = nivel;
    cout<<nod<<" : "<<nivel<<"\n";
    for(int i=1; i<=n; i++)
        if(vizitat[i]==0 && a[nod][i]==1)
            df(i, nivel+1);
}

int main()
{
    cin>>n>>start;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cin>>x>>y;
            a[x][y]=a[y][x]=1;
    }

    df(start, 1);

    return 0;
}
