#include <fstream>

using namespace std;

ifstream cin("maxcif.in");
ofstream cout("maxcif.out");

int fr[10];

int main(){

    int x, maxim=-1;

    while(cin>>x) fr[x]++;

    for(int i=0; i<=9; i++)
        if(fr[i]>maxim) maxim=fr[i];

    for(int i=0; i<=9; i++)
        if(fr[i]==maxim) cout<<i<<" ";

    return 0;
}