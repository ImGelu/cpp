#include <iostream>

using namespace std;

int nrdiv(int n){
    int d=2, nr=0, k=0;

    while(n>1){
        nr=0;
        while(n%d==0){
            n/=d;
            nr++;
        }
        if(nr) k++;
        d++;
        if(d*d>n) d=n;
    }
    return k;
}

int main(){

    int x, prev, max=-1, nrMax=-1;

    cin>>x;

    while(x!=prev){
        if(nrdiv(x)>max){
            max=nrdiv(x);
            nrMax=x;
        }
        if(nrdiv(x)==max){
            if(x>nrMax) nrMax=x;
        }

        prev=x;
        cin>>x;
    }

    cout<<nrMax<<" "<<max;
    return 0;
}