#include <iostream>

using namespace std;

int minDivPrim(int n){
    int s=1, divizor=2, putere=0;
    while(n>1){
            if(n%divizor==0){
            s*=divizor;
            while(n%divizor==0)
            n/=divizor;
        }
        divizor++;
        if(divizor*divizor>n) divizor=n;
    }
    return s;
}

int main(){

    return 0;
}