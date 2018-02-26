#include <iostream>
#include <vector>

using namespace std;

bool vizitat[100];
vector <int> a[100];
int n, x, y, start;

void DFS(int nod){
    vizitat[nod]=1;
    cout<<nod<<" ";
    for(int i=1; i<a[nod].size(); i++)
        if(!vizitat[a[nod][i]]) DFS(a[nod][i]);
}

int main()
{
    cin>>n>>start;

    for(int i=1; i<=n; i++){
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    DFS(start);

    return 0;
}
