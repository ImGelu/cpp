#include <iostream>

using namespace std;

bool exista=0;
int k=1, y[1000];

void bSort(int a[], int n){
    for(int i=1; i<n; i++)
        for(int j=1; j<(n-i); j++)
        if(a[j]>a[j+1]) swap(a[j], a[j+1]);
}

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

void sir(int n){
    int gasit=0;
    for(int i=1; i<=k; i++)
        if(y[i]==n) gasit=1;

    if(gasit==0){
        y[k]=n;
        k++;
    }
}

void descompunere(int n){
    int putere=0, divizor=2;

    while(n>1){
        putere=0;
        while(n%divizor==0){
            putere++;
            n=n/divizor;
        }
        if(putere==1 && prim(divizor)) exista=1, sir(divizor);
        divizor++;
    }
}

void citire(int n, int a[100]){
    for(int i=1; i<=n; i++){
        cin>>a[i];
        descompunere(a[i]);
    }
}

void afisare(int n, int a[100]){
    if(exista){
    bSort(a, n);
    for(int i=1; i<n; i++) cout<<a[i]<<" ";
    }
    else cout<<"Sirul Y este vid.";
}

int main()
{
    int n, a[1000];

    cin>>n;

    citire(n,a);
    afisare(k,y);

    return 0;
}
