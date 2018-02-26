#include <fstream>
#include <vector>

using namespace std;

ifstream cin("dfs.in");
ofstream cout("dfs.out");

bool vizitat[200000];
int n, m;
vector <int> vecini[200000];

int df(int nod){
    bool vizitatAcum=0;
    vizitat[nod]=1;
    for(int i=0; i<vecini[nod].size(); i++){
        vizitatAcum=vizitat[vecini[nod][i]];
        if(!vizitatAcum){
            vizitatAcum=1;
            df(vecini[nod][i]);
        }
    }
}

int main()
{
    int x, y, k=0;

    cin>>n>>m;

    for(int i=1; i<=m; i++){
        cin>>x>>y;
        vecini[x].push_back(y);
        vecini[y].push_back(x);
    }

    for(int i=1; i<=n; i++)
    if(vizitat[i]==0) k++, df(i);

    cout<<k;

    return 0;
}
