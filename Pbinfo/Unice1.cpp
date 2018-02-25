#include <fstream>

using namespace std;

ifstream cin("unice1.in");
ofstream cout("unice1.out");

int main()
{
    int n, a[10000], k=0, f[10000], cnt=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        for(int j=n; j>=1; j--)
            if(a[i]==a[j] && i!=j){
                f[a[i]]++;
            }

    for(int i=1; i<=n; i++) if(f[a[i]]==0) k++;

    cout<<k;
    return 0;
}