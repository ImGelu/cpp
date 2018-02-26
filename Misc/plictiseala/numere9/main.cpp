#include <fstream>

using namespace std;

ifstream cin("numere9.in");
ofstream cout("numere9.out");

int main()
{
    int n, fr[250005]={0}, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>x;
            if(x!=0) fr[x]++;
        }
    }

    for(int i=1; i<=n*n; i++)
        if(fr[i]==0){
            cout<<i<<" ";
            break;
        }

    for(int i=n*n; i>=1; i--)
        if(fr[i]==0){
            cout<<i<<" ";
            break;
        }
    return 0;
}
