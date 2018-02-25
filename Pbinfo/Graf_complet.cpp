#include <fstream>

using namespace std;

ifstream cin("graf_complet.in");
ofstream cout("graf_complet.out");

int main()
{
    int t, n, a[105][105];
    bool ok=true;

    cin>>t;

    for(int ii=1; ii<=t; ii++){
        ok=true;
        cin>>n;

        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cin>>a[i][j];

        for(int i=2; i<=n; i++)
            for(int j=1; j<=i-1; j++)
                if(!a[i][j]) ok=false;

        if(ok) cout<<"DA\n";
        else cout<<"NU\n";
    }
    return 0;
}
