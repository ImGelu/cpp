#include <iostream>

using namespace std;

int main(){

    int a, b;

    cin>>a>>b;

    while(b){
        int rest=a%b;
        a=b;
        b=rest;
    }

    if(a==b && a==0) cout<<-1;

    else cout<<a;

    return 0;
}