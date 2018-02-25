#include <iostream>

using namespace std;

int main(){

    int a, b, aa, bb;

    cin>>a>>b;
    aa=a;
    bb=b;

    while(b){
        int rest=a%b;
        a=b;
        b=rest;
    }
    cout<<(aa*bb)/a;

    return 0;
}