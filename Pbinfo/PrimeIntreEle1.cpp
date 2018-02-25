#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    while(b){
        int rest=a%b;
        a=b;
        b=rest;
    }
    return a;
}

int main(){

    int n, k=0;

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j++)
            if(cmmdc(i, j)==1) k++;

    cout<<k;

    return 0;
}