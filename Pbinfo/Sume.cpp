#include <fstream>

using namespace std;

ifstream cin("sume.in");
ofstream cout("sume.out");

int main()
{
    int n, a[101], k=0, s=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    while(k<n){
    s=0;
    for(int i=1; i<=n-k; i++) s+=a[i];
    cout<<s<<"\n";
    k++;
    }

    return 0;
}