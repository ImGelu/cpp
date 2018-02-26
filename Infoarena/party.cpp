#include <fstream>

using namespace std;

ifstream cin("party.in");
ofstream cout("party.out");

struct cerinta { int x, y, z; } a[1024];
int p[128], n, m, a1, a2, a3, k;
bool ok=1;

int main()
{
    cin>>n>>m;

    for(int i=1; i<=n; i++) p[i]=1;
    for(int i=1; i<=m; i++) cin>>a[i].x>>a[i].y>>a[i].z;

    while(ok){
        ok=0;
        for(int i=1; i<=m; i++){
            a1=a[i].x, a2=a[i].y, a3=a[i].z;
            if(a3==0)
                if(p[a1]==0 && p[a2]==0){
                    p[a1]=p[a2]=ok=1;
                    break;
                }

            if(a3==1)
                if(p[a1]==0 && p[a2]!=0){
                    p[a2]=0;
                    ok=1;
                    break;
                }
            if(a3==2)
                if(p[a2]==0 && p[a1]!=0)
                {
                    p[a1]=0;
                    ok=1;
                    break;
                }
            if(a3==3)
                if(p[a1]==1 && p[a2]==1)
                {
                    p[a2]=0;
                    ok=1;
                    break;
                }
        }
    }

    for(int i=1; i<=n; i++)
        if(p[i]) k++;

    cout<<k<<"\n";

    for(int i=1; i<=n; i++)
        if(p[i]) cout<<i<<"\n";

    return 0;
}