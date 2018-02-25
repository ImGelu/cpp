#include <iostream>
#include <bitset>

using namespace std;

bitset<300001>fr;

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]=true;
    }

    for(int i=0; i<=300000; i++)
        if(fr[i]==true) cout<<i<<" ";

    return 0;
}