#include <iostream>

using namespace std;

void citire(int &n, int a[]){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
}

void afisare(int n, int a[]){
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}

void sortare(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i]<a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

int redus(int n){
    int s=1, divizor=2;
    while(n>1){
            if(n%divizor==0){
            s*=divizor;
            while(n%divizor==0)
            n/=divizor;
        }
        divizor++;
        if(divizor*divizor>n) divizor=n;
    }
    return s;
}

void inloc(int n, int a[]){
    for(int i=1; i<=n; i++){
        a[i]=redus(a[i]);
    }
}

int main()
{
    int n, a[1005];

    citire(n, a);
    inloc(n, a);
    sortare(a, n);
    afisare(n, a);

    return 0;
}