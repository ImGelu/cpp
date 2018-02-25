#include <iostream>

using namespace std;

int sumcif(int n, int &f){
    if(n==0) return f=0;
    else return f=n%10+sumcif(n/10, f);
}

int main(){

    return 0;
}