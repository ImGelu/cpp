#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("graf1.txt");
ifstream gin("graf2.txt");

int main()
{
    int n, m;
    bool g[100][100], gP[100][100], ok=true;

    fin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin>>g[i][j];

    gin>>m;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=m; j++)
            gin>>gP[i][j];

    if(n!=m) cout<<"Grafurile nu au acelasi numar de noduri";
    else{

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(!(g[i][j]==1 && gP[i][j]==0)){ ok=false; break; }

    if(ok==true) cout<<"gP este graf partial al lui G";
    else cout<<"gP este graf partial al lui G";
    }

    return 0;
}
