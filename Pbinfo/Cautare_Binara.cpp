#include <iostream>

using namespace std;

int n, a[200005], b[200005], ok=0, m;

bool cautareBinara(int x){

int li=1, ls=n, gasit=0, mij;

while(li<=ls && !gasit){
    mij=(li+ls)/2;
    if(x==a[mij]) return true;

    else if(x>a[mij]) li=mij+1;
    else ls=mij-1;
}
    return false;
}

int main()
{

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cin>>m;

    for(int i=1; i<=m; i++){
        ok=0;
        cin>>b[i];

        if(cautareBinara(b[i])) cout<<1<<" ";
        else cout<<0<<" ";
    }


    return 0;
}
