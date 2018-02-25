#include <fstream>

using namespace std;

ifstream cin("sortare.in");
ofstream cout("sortare.out");

int main(){

    int n, a[101];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]<a[j]) swap(a[i], a[j]);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}