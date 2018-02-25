#include <fstream>

using namespace std;

ifstream cin("ciffrecv.in");
ofstream cout("ciffrecv.out");

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
    int x, fr[10]={0};

    while(cin){
        cin>>x;
        fr[x]++;
    }

    for(int i=9; i>=3; i--)
        if(prim(i) && fr[i]!=0){cout<<i<<" "<<fr[i]; break;}

    return 0;
}