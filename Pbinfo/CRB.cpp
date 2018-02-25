#include <fstream>

using namespace std;

ifstream cin("crb.in");
ofstream cout("crb.out");

void sortare(int n, int a[], int b[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]<a[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
}

int main(){

    int n, a[1001], b[1001], k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        b[i]=i;
    }

    sortare(n, a, b);

    for(int i=1; i<=n; i++)
        if(b[i]==i) k++;

    cout<<k;

    return 0;
}