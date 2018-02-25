#include <fstream>
#include <vector>
using namespace std;
ifstream cin("conex.in");
ofstream cout("conex.out");
vector <int> a[100];
int viz[1001],k=0;
void dfs(int nod){
k++;
viz[nod]=1;
for(int i=0;i<a[nod].size();++i){
if(!viz[a[nod][i]])
dfs(a[nod][i]);
}
}
int main()
{
int n,m,x,y;
cin>>n;
while(cin>>x>>y){
a[x].push_back(y);
a[y].push_back(x);
}
dfs(1);
if(k==n)cout<<"DA";
else cout<<"NU";
return 0;
}