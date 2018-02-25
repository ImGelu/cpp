//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("comori1.in");
ofstream cout("comori1.out");

int main()
{
    int n, a[1000], ok=1, ok2=1;
    a[0]=-1;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    if(a[i]>=0){
        if(a[i]>=a[i-1]) ok=1;
            else{ ok=0; ok2=0; cout<<i<<" "; }
    }
    }

    if(ok==1 && ok2==1) cout<<0;

    return 0;
}
