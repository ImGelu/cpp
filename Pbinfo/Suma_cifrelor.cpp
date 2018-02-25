#include <iostream>

using namespace std;

void sum_cif(int n, int &sum){
    int s=0;

    while(n){
        s+=n%10;
        n/=10;
    }
    sum=s;
}

int main(){

    return 0;
}