#include <iostream>

using namespace std;

int pow(int a, int b){
    int p=1;
    for(int i=1; i<=b; i++)
        p*=a;
    return p;
}

void sum_div(int n, int &s){
    int putere=0, divizor=2;
    s=1;

    while(n>1){
    putere=0;
    while(n%divizor==0){
        putere++;
        n=n/divizor;
    }
    if(putere) s*=(pow(divizor, putere+1)-1)/(divizor-1);
    divizor++;
    }
}

int main(){

    return 0;
}