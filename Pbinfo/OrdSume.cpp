#include <fstream>

using namespace std;

ifstream cin("ordsume.in");
ofstream cout("ordsume.out");

void sortare(int n, int a[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i], a[j]);
}

int main(){

    int n, x, a[1001], b[10001], k=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]!=a[j]) b[k++]=a[i]+a[j];

    k--;

    sortare(k, b);

    for(int i=1; i<=k; i++)
        if(b[i]!=b[i+1]) cout<<b[i]<<" ";

    return 0;
}