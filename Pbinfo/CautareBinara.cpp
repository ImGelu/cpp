#include <iostream>

using namespace std;

int cautaraBinara(int v[], int x, int li, int ls){
    int mij;

    while(li<=ls){
        mij=(li+ls)/2;
        if(x==v[mij]) return 1;
        else if(x>v[mij]) li=mij+1;
        else ls=mij-1;
    }

    return 0;

}

int main()
{
    int n, m, a[200000], b[200000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cin>>m;

    for(int i=1; i<=m; i++){
        cin>>b[i];
        cout<<cautaraBinara(a, b[i], 1, n)<<" ";
    }

    return 0;
}