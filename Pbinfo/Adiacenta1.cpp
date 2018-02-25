#include <fstream>

using namespace std;

ifstream cin("adiacenta1.in");
ofstream cout("adiacenta1.out");

bool g[101][101];

int main()
{
    int n, m, i, j, maxim=-1;

    while(cin){
    cin>>i>>j;
    g[i][j]=1;
    g[j][i]=1;
    if(i>maxim) maxim = i;
    if(j>maxim) maxim = j;
    }

    for(int i=1; i<=maxim; i++){
        for(int j=1; j<=maxim; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
