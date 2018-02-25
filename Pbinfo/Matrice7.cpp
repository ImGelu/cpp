#include <fstream>

using namespace std;

ifstream cin("matrice7.in");
ofstream cout("matrice7.out");

int main(){

    int n, m, a[105][105], v[105], maxim=-1, minim;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(a[i][j]>maxim) maxim=a[i][j];
        }

    minim=a[1][1];

    for(int j=1; j<=m; j++){
        minim=a[1][j];
        for(int i=1; i<=n; i++)
            if(a[i][j]<minim) minim=a[i][j];

        v[j]=minim;
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(a[i][j]==maxim) a[i][j]=v[j];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }


    return 0;
}