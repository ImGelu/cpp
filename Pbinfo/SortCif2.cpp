#include <fstream>

using namespace std;

ifstream cin("sortcif2.in");
ofstream cout("sortcif2.out");

void sortare(int n, int a[], int b[]){
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(b[i]>b[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
}

int main(){

    int n, a[101], c[101];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        int aux=a[i];
        while(aux>9){
            aux=aux/10;
        }
        c[i]=aux;
    }

    sortare(n, a, c);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}