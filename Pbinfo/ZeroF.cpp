#include <iostream>

using namespace std;

int zerof(int n){
    int k=0;
    for(int i=5; n/i>=1; i*=5){
        k+=n/i;
    }

    return k;
}

int main(){

    return 0;
}