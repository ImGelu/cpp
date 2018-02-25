#include <fstream>

using namespace std;

ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

void sortare(int a, int b, int v[], bool cresc){
    for(int i=a; i<b; i++)
        for(int j=i+1; j<=b; j++)
            if(cresc){
                if(v[i]>v[j]) swap(v[i], v[j]);
            }
            else if(v[i]<v[j]) swap(v[i], v[j]);
}

int main(){

    int n, a[101];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    sortare(1, n/2, a, 1);
    sortare(n/2+1, n, a, 0);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}