#include <iostream>
using namespace std;
int st[100],n,k;
void afisare(int p)
{
    int i;
    cout<<"(";
    for(i=1; i<p; ++i)
        cout<<st[i]<<",";
    cout<<st[p]<<")"<<",";
}
void back(int p)
{
    int pval;
    for(pval=st[p-1]+1; pval<=n; pval++)
    {
        st[p]=pval;
        if(p==k) afisare(p);
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
    cout<<"(";
    for(i=1; i<n; i++)
        cout<<i<<",";
    cout<<n<<")";
    return 0;
}
