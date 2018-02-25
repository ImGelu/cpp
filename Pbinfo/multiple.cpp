#include <fstream>

using namespace std;

ifstream cin("multiple.in");
ofstream cout("multiple.out");

int main()
{
    int t, n, k;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>n>>k;
        if(n==k) cout<<n+n<<"\n";
        else if(n>k) cout<<(k%n)*((n/k)+1)<<"\n";
        else cout<<k<<"\n";
    }
    return 0;
}
