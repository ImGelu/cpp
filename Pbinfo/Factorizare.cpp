#include <iostream>

using namespace std;

int main(){

    int n, div=2,  nrDiv=0;

    cin>>n;

    while(n>1){
        if(div*div>n) div=n;
        while(n%div==0){
            n=n/div;
            nrDiv++;
        }
        if(nrDiv) cout<<div<<" "<<nrDiv<<"\n";
        div++;
        nrDiv=0;
    }

    return 0;
}