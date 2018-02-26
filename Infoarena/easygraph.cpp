#include <fstream>
#include <vector>

using namespace std;

int t,n,m,x,y;

long long int rez;

vector <int> a[15024];
int val[15024], viz[15024];
long long int sum[15024];

void DFSUtil(int nod)
{
    viz[nod]=1;
    for(unsigned int i=0; i<a[nod].size(); ++i)
    {
        if(!viz[a[nod][i]]) DFSUtil(a[nod][i]);
        sum[nod]=max(sum[nod], val[nod]+sum[a[nod][i]]);
    }
}

void DFS()
{
    for(int i=1; i<=n; ++i)
    {
        sum[i]=val[i];
        viz[i]=0;
    }

    for(int i=1; i<=n; ++i)
        if(!viz[i]) DFSUtil(i);

}


int main()
{
    ifstream cin("easygraph.in");
    ofstream cout("easygraph.out");

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>n>>m;

        for(int i=1; i<=n; ++i) cin>>val[i];

        for(int i=0;i<m;++i) cin>>x>>y, a[x].push_back(y);

        DFS();

        rez=sum[1];

        for(int i=1; i<=n; ++i) rez=max(rez,sum[i]);

        cout<<rez<<"\n";

        for(int i=1; i<=n; ++i) a[i].clear();
    }
    return 0;
}