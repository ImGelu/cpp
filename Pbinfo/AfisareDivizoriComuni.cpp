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

int main(){

    int a, b;

    cin>>a>>b;
    int c=cmmdc(a, b);

    for(int i=1; i<=c; i++)
        if(c%i==0) cout<<i<<" ";

    return 0;
}