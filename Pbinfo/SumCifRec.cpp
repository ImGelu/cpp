#include <iostream>

using namespace std;

int sumcif(int n){
    if(n==0) return 0;
    else return n%10+sumcif(n/10);
}

int main(){

    return 0;
}