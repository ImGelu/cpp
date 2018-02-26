#include <iostream>
using namespace std;


int st[101],n;

void afisare(int p)
{
    for(int i=1; i<=p; i++)
        cout<<st[i]<<" ";
        cout<<'\n';
}

bool valid(int p)
{
    for(int i=1; i<p; i++)
        if(st[p]==st[i])
            return 0;
    return 1;
}
void back(int p)
{
    int pval;
    for(pval=st[p-1]+1; pval<=n; pval++)
    {
        st[p]=pval;
        if(valid(p))
        {
            afisare(p);
            back(p+1);
        }

    }

}
int main()
{
    cin>>n;
    back(1);
    return 0;
}
