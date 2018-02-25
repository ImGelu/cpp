#include <fstream>

using namespace std;

ifstream cin("subnumar.in");
ofstream cout("subnumar.out");

int fr[100];

int main(){

    int x, maxim=-1;

    while(cin>>x){
        while(x){
            fr[x%100]++;
            x/=10;
        }
    }

    for(int i=99; i>=10; i--)
        if(fr[i]>maxim) maxim=fr[i];

    for(int i=99; i>=10; i--)
        if(fr[i]==maxim) cout<<i<<" ";

    return 0;
}