#include <fstream>

using namespace std;

ifstream cin("halfsort2.in");
ofstream cout("halfsort2.out");

void sortare(int n, int a[], bool par){
    if(par==1){
        for(int i=2; i<n-1; i+=2)
            for(int j=i+2; j<=n; j+=2)
                if(a[i]>a[j]) swap(a[i], a[j]);
    }
    else{
        for(int i=1; i<n; i+=2)
            for(int j=i+2; j<=n; j+=2)
                if(a[i]<a[j]) swap(a[i], a[j]);
    }
}

int main(){

    int n, a[101];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    sortare(n, a, 1);
    sortare(n, a, 0);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}