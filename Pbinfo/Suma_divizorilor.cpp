#include <iostream>

using namespace std;

int sum_div(int n){
    int s=0, sq = n/2;
    for(int i=1; i<=sq; ++i){
        if(n%i==0) s+=i;
    }
    return s+n;
}

int main(){

    return 0;
}