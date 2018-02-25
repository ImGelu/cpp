#include <iostream>

using namespace std;

void inserare(int x, int nr, int &n, int a[]){
    for(int i=n+1; i>=x; i--) a[i]=a[i-1];
    a[x]=nr;
    n++;
}

void sortare(int n, int a[], int b[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
            else if(a[i]==a[j] && b[i]>b[j]) swap(b[i], b[j]);
}

int main(){

    int a[101], ind[101], n;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        ind[i]=i;
    }

    sortare(n, a, ind);

    for(int i=1; i<=n; i++) cout<<a[i]<<" "<<ind[i]<<" ";

    return 0;
}