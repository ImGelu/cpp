#include <iostream>

using namespace std;

double pr(int a, int b){
    double p=1;
    for(int i=1; i<=b; i++)
        p=p*a;
    return p;
}

int nrcif(int n){
    int k=0;
    while(n>0){
        k++;
        n=n/10;
    }
    return k;
}

int invers(int n){
    int nr=0;
    while(n>0){
        nr=nr*10 + n%10;
        n=n/10;
    }
    return nr;
}

double nreal(int a, int b){
    int inv = invers(b);
    while(inv>0){
    a=a*10 + inv%10;
    inv=inv/10;
    }
    double sol = a/pr(10, nrcif(b));
    return sol;
}

int main(){

    return 0;
}