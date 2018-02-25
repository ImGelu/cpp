#include <fstream>

using namespace std;

ifstream cin("pozitiex.in");
ofstream cout("pozitiex.out");

int main()
{
    int n, a[100000], k=0, x, exista=0;

    cin>>x>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==x) exista=1;
        if(a[i]<x) k++;
    }

    if(exista==0) cout<<"NU EXISTA";
    else cout<<k+1;

    return 0;
}