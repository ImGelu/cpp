#include <fstream>

using namespace std;

ifstream cin("cautaprim.in");
ofstream cout("cautaprim.out");

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main()
{
    int n, x, fr[100]={0};
    bool ok=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }

    for(int i=99; i>=1; i--)
        if(prim(i) && !fr[i]){cout<<i; ok=1; break;}

    if(ok==0) cout<<0;

    return 0;
}