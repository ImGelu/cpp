#include <fstream>

using namespace std;

ifstream cin("grade.in");
ofstream cout("grade.out");

bool g[101][101];

int main()
{
    int n, i, j, s=0;

    cin>>n;

    while(cin){
        cin>>i>>j;
        g[i][j]=1;
        g[j][i]=1;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            s+=g[i][j];
        }
        cout<<s<<" ";
        s=0;
    }
    return 0;
}
