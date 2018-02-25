#include <iostream>

using namespace std;

void aranjare(int a[10000], int n){
    int b[10000], k1=0, k2=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){b[n-1-k1]=a[i]; k1++;}
        else{b[k2]=a[i]; k2++;}
    }

    for(int i=0; i<n; i++) a[i]=b[i];
}

int main()
{
    int n, a[10000];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    aranjare(a,n);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}
