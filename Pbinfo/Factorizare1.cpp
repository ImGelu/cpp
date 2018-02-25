#include <iostream>

using namespace std;

int main(){

    int n, div=2, nrDiv=0, divMax=-1, nrDivMax=-1;

    cin>>n;

    while(n>1){
        nrDiv=0;
        while(n%div==0){
            n/=div;
            nrDiv++;
        }
        if(nrDiv && nrDiv>=nrDivMax){
            nrDivMax=nrDiv;
            divMax=div;
        }
        div++;
        if(div*div>n) div=n;
    }

    cout<<divMax;

    return 0;
}