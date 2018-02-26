# include <fstream>
# include <vector>
# define f first
# define s second

using namespace std;

ifstream fin("sate.in");
ofstream fout("sate.out");

vector< pair<int,int> > A[30010];

int viz[30010], n, m, x, y, a, b, cost;

void dfs(int nod){
    for(int i=0; i<A[nod].size(); i++){
        int fs=A[nod][i].f;
        int cost=A[nod][i].s;
        if(!viz[fs]){
            viz[fs]=viz[nod]+cost;
            dfs(fs);
        }
    }
}

int main(){

    fin>>n>>m>>x>>y;

    if(x>y) swap(x,y);

    for(int i=1; i<=m; i++){
        fin>>a>>b>>cost;
        A[a].push_back(make_pair(b, cost));
        A[b].push_back(make_pair(a, -cost));
    }

    dfs(x);

    fout<<viz[y]<<"\n";

    return 0;
}