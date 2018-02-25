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
    cout<<a/cmmdc(a, b)*b/cmmdc(a, b)<<" "<<cmmdc(a, b);

    return 0;
}