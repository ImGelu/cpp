#include <iostream>

using namespace std;

int cifmax(int n){
    if(n<10) return n;
    else return max(n%10, cifmax(n/10));
}

int main(){

    return 0;
}
