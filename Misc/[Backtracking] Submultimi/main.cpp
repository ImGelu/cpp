#include <iostream>
using namespace std;
int st[100],n,k;
void afisare(int p)
{
    int i;
    for(i=1; i<p; ++i)
    cout<<st[i]<<" ";
    cout<<st[p]<<" ";
    cout<<'\n';
}
int solutie(int p)
{
    if(p==k)
        return 1;
    return 0;
}
void back(int p)
{
    int pval;
    for(pval=st[p-1]+1; pval<=n; pval++)
    {
        st[p]=pval;
        if(solutie(p))
            afisare(p);
        else
            back(p+1);
    }
}
int main()
{
    int i;
    cin>>n;
    for(k=1; k<=n-1; k++)
        back(1);
    for(i=1; i<=n; i++)
        cout<<i<<" ";
    return 0;
}
