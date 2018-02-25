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

    int n, x, y, px, py, c;

    cin>>n;

    cin>>x>>y;
    px=x;
    py=y;

    for(int i=1; i<n; i++){
        cin>>x>>y;
        int m=cmmmc(py, y);
        int d=cmmdc(py, y);

        px=px*(m/py)+x*(m/y);
        py=m;
    }

    cout<<px/cmmdc(px, py)<<" "<<py/cmmdc(px, py);

    return 0;
}