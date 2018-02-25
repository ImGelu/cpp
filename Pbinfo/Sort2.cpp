#include <fstream>

using namespace std;

ifstream cin("sort2.in");
ofstream cout("sort2.out");

int fr[100];

int main(){

    int n, x, ok=0;

    while(cin>>x)
        if(x<=99) fr[x]++;

    for(int i=1; i<=99; i++)
        for(int j=1; j<=fr[i]; j++){
            cout<<i<<" ";
            ok=1;
        }

    if(ok==0) cout<<"NU EXISTA";

    return 0;
}