#include <fstream>
#include <bitset>
#include <vector>

#define x first
#define y second

using namespace std;

ifstream fin("mesaj4.in");
ofstream fout("mesaj4.out");

int a, b, n, m, sol;
pair <int, int> s[100010];
vector <int> l[100010];
bitset <100010> viz;

void DFS(int nod){

    viz[nod]=1;

    for(int i=0; i<l[nod].size(); i++)
        if(!viz[l[nod][i]])
        {
            DFS(l[nod][i]);
            sol++;
            s[sol].x = nod;
            s[sol].y = l[nod][i];
        }
}

int main()
{
    fin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        fin>>a>>b;
        l[a].push_back(b);
        l[b].push_back(a);
    }

    DFS(1);

    if(sol!=n-1) fout<<-1;
    else{

    fout<<2*sol<<'\n';

    for(int i=1; i<=sol; i++) fout<<s[i].y<<" "<<s[i].x<<'\n';

    for(int i=sol; i>=1; i--) fout<<s[i].x<<" "<<s[i].y<<'\n';

    }

    return 0;
}