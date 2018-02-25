#include <fstream>
#include <vector>

using namespace std;

ifstream cin("dfs.in");
ofstream cout("dfs.out");

vector <int> a[105];

bool vizitat[105];
int n, m, x, y, start;

void DFS(int nod){
    vizitat[nod]=1;
    cout<<nod<<" ";
        for(int i=0; i<a[nod].size(); i++)
            if(!vizitat[a[nod][i]]) DFS(a[nod][i]);
    }

int main()
{
    cin>>n>>m>>start;

    for(int i=1; i<=m; i++){
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    DFS(start);

    return 0;
}