#include <fstream>

using namespace std;

ifstream cin("cifreord.in");
ofstream cout("cifreord.out");

int main()
{
    int n, fr[10]={0}, x, k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }

    for(int i=0; i<=9; i++){
        for(int j=1; j<=fr[i]; j++){
            k++;
            cout<<i<<" ";
        if(k%20==0) cout<<"\n";
        }
    }

    return 0;
}