#include <iostream>

using namespace std;

int main(){

    int x, prec, aux1, aux2, k=0;

    cin>>x;
    prec=x;

    while(x!=0){
        cin>>x;
        aux1=prec;
        aux2=x;
        while(aux2){
            int rest=aux1%aux2;
            aux1=aux2;
            aux2=rest;
        }
        if(aux1==1) k++;

        prec=x;

    }

    cout<<k;

    return 0;
}