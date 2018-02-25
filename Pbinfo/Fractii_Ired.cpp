#include <iostream>

using namespace std;

int main(){
    int n, div=2, p;
    cin>>n;
    p=n;

    while(n>1){
        if(n%div==0){
            p/=div;
            p*=div-1; //https://ro.wikipedia.org/wiki/Indicatorul_lui_Euler
            while(n%div==0) n/=div;
        }

        if(div==2) div=3;
        else div+=2;
            if(div*div>n) div=n;
        }

    cout<<p;

    return 0;
}