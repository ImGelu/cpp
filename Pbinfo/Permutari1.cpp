#include <fstream>

using namespace std;

ifstream cin("permutari1.in");
ofstream cout("permutari1.out");

int v[20], n;

void afisare(int p)
{
    for(int i=1; i<=n; i++)
        cout<<v[i]<<" ";
        cout<<'\n';
}
bool valid(int p)
{
    for(int i=1; i<p; i++)
        if(v[i]==v[p])
            return false;
    return true;
}
void back(int p)
{
    int pval;
    for(pval=n; pval>=1; pval--)
    {
        v[p]=pval;
        if(valid(p))
            if(p==n) afisare(p);
            else back(p+1);
    }
}

int main()
{
    cin>>n;
    back(1);
    return 0;
}