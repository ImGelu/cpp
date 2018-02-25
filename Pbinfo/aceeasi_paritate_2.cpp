#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, a[10000], exista=1, aux;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    while(exista){
        for(int i=1; i<=n; i++) cout<<a[i]<<" ";
        cout<<endl;
        exista=0;
    for(int i=2; i<=n; i++){
        if(abs(a[i-1]%2)==abs(a[i]%2) && a[i]!=a[i-1]){
        exista=1;
        n++;
        for(int j=n+1; j>=i; j--) a[j]=a[j-1];
        a[i]=(a[i+1]+a[i-1])/2;
        i++;
        }
    }
    }



    return 0;
}