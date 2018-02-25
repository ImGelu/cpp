#include <iostream>

using namespace std;

int main(){

    int n, m, p=1, k=0, aux;

    cin>>n>>m;
    
    for(int i=1; i<=n; i++){
        aux=i;
        while(aux%m==0) aux/=m, k++;
    }
    
    cout<<k;

    return 0;
}