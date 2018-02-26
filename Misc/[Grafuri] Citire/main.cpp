#include <fstream>

using namespace std;

ifstream cin("grafuri.in");
ofstream cout("grafuri.out");

int main()
{
    int n, p, sP=0, s=0, maxim=-1, k=0, izo[1000];
    bool graf[1000][1000], complet=true;

    cin>>n>>p;

    for(int i=1; i<=n; i++){
        s=0;
        for(int j=1; j<=n; j++){
            cin>>graf[i][j];
            if(i==p && i!=j) sP+=graf[i][j];
            s+=graf[i][j];
            if(s>maxim) maxim=s;
            if(i!=j && graf[i][j]==0) complet=false;
            if(j==n && s==0) izo[k++]=i;
        }
    }

        cout<<"Gradul nodului "<<p<<" : "<<sP;
        cout<<"\nNoduri izolate : ";
        for(int i=0; i<k; i++) cout<<izo[i]<<" ";
        cout<<"\nNoduri cu grad maxim ("<<maxim<<") : ";

    for(int i=1; i<=n; i++){
        s=0;
        for(int j=1; j<=n; j++){
            s+=graf[i][j];
            if(j==n && s==maxim) cout<<i<<" ";
        }
    }

    if(!complet) cout<<"\nGraf incomplet";
    else cout<<"\nGraf complet";

    return 0;
}
