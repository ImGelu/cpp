#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    if(a==b) return b;
    else if(a>b) return cmmdc(a-b,b);
    else return cmmdc(a, b-a);
}

int main(){

    return 0;
}