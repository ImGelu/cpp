#include <iostream>

using namespace std;

void sum_div_prim(int n, int &s){
    s=0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) s+=d;
}

int main(){

    return 0;
}