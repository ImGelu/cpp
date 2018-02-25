#include <fstream>

using namespace std;

ifstream cin("matrice4.in");
ofstream cout("matrice4.out");

int suma(int x[1000][1000], int n, int &p){
    p=0;
    for(int i=1; i<=n; i++){
        p=0;
        for(int j=1; j<=n; j++)
            p+=x[i][j];
        if(p%2==0) cout<<i<<" ";
    }
}

int main()
{
    int n, a[1000][1000], p;

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    suma(a, n, p);

    return 0;
}