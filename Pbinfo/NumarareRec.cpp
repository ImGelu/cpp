#include <iostream>

using namespace std;

int numarare(int v[], int n){
    if(n==0) return 0;
    else if(v[n]==v[n-1]) return 1+numarare(v,n-1);
    else return numarare(v,n-1);
}

int main(){

    return 0;
}