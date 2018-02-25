#include <iostream>
#include <math.h>

using namespace std;

int sdiv(int n){
 int exp, d=2, suma=1;
 while(n>1){
    exp=0;
    while(n%d==0){
        n=n/d;
        exp++;
    }
    if(exp!=0) {suma=suma*((pow(d,exp+1)-1)/(d-1));}
    d++;


 }
 return suma;
}

int main(){

    int n;

    cin>>n;

    if(sdiv(n)%n==0) cout<<"DA";
    else cout<<"NU";

    return 0;
}