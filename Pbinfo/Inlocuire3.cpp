#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

void citire(int &n, int a[]){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
}

void afisare(int n, int a[]){
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}

int urmatorul_prim(int &n){
    n++;
    while(!prim(n)) n++;

    return n;
}

void inloc(int a[], int n){
    for(int i=1; i<=n; i++)
        if(!prim(a[i])) a[i]=urmatorul_prim(a[i]);
}

int main()
{
    int a[1000], n;

    citire(n,a);
    inloc(a,n);
    afisare(n,a);

    return 0;
}