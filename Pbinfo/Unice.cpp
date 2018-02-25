#include <fstream>

using namespace std;

ifstream cin("unice.in");
ofstream cout("unice.out");

int fr[100];

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }

    for(int i=0; i<=99; i++)
        if(fr[i]==1) cout<<i<<" ";

    return 0;

}