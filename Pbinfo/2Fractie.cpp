#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    int rest;
    while(b){
        rest=a%b;
        a=b;
        b=rest;
    }
    return a;
}

int cmmmc(int a, int b){
    return a*b/cmmdc(a, b);
}

int main(){

    int a1, b1, a2, b2, p1, p2, dc;

    cin>>a1>>b1;
    cin>>a2>>b2;

    p1=a1*a2;
    p2=b1*b2;

    dc=cmmdc(b1, b2);

    if(b1!=b2){
        a1*=cmmmc(b1, b2)/b1;
        a2*=cmmmc(b1, b2)/b2;
        b1=b2=cmmmc(b1, b2);
    }

    cout<<(a1+a2)/cmmdc(a1+a2, b1)<<" "<<b1/cmmdc(a1+a2, b1)<<"\n"<<p1/cmmdc(p1, p2)<<" "<<p2/cmmdc(p1, p2);

    return 0;
}