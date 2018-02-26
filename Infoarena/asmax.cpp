#include <fstream>
#include <vector>
#include <string.h>
#include <algorithm>
#define nmax 16002

using namespace std;

ifstream fin("asmax.in");
ofstream fout("asmax.out");

int best[nmax],sol=-((1<<31)-1),viz[nmax];;
vector <int> G[nmax],val(nmax);

void df(int node)
{
    viz[node]=1;
    int nrvec=G[node].size();
    best[node]=val[node];
    for(int i=0;i<nrvec;i++){
        if(!viz[G[node][i]]){
                df(G[node][i]);
            best[node]=max(best[node], best[node]+best[G[node][i]]);
        }
    }
    sol=max(best[node],sol);
}

int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++) fin>>val[i];
    for(int i=1;i<n;i++)
    {
        int a1,b;
        fin>>a1>>b;
        G[a1].push_back(b);
        G[b].push_back(a1);
    }
    df(1);
    fout<<sol<<'\n';
    return 0;
}