#include <iostream>

using namespace std;

int num(int n, int v[]){
    if(n<0) return 0;

    else if(v[n]<=v[0]) v[n]=0;

    return num(n-1,v);
}

int main(){

    return 0;
}