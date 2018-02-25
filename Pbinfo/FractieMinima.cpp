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

    int n, x, min=999999, max=-1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x<min) min=x;
        if(x>max) max=x;
    }

    cout<<min/cmmdc(min, max)<<"/"<<max/cmmdc(min, max);

    return 0;
}