#include <iostream>

using namespace std;

void numar(int n, int a[100], int &k){
    int maxim=-1, minim=999999, aux;
    k=0;

    for(int i=0; i<n; i++){
        if(a[i]>maxim) maxim=a[i];
        if(a[i]<minim) minim=a[i];
    }

    k=maxim;
    aux=minim;

    while(minim){
        k=k*10;
        minim/=10;
    }
    k=k+aux;
}

int main()
{
    int n, a[100], k;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    numar(n,a,k);

    cout<<k;
    return 0;
}
