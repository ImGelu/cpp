#include <iostream>

using namespace std;

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        int d=2, nrdiv=0, p=1;
        cin>>x;
        while(x>1){
            while(x%d==0){
                x/=d;
                nrdiv++;
            }
            if(nrdiv) p*=(2*nrdiv+1);
            nrdiv=0;
            d++;
            if(d*d>x) d=x;
        }
        cout<<p<<" ";
    }
    return 0;
}