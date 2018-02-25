#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, div=2;

    cin>>n;

    while(n>1){
        if(div>sqrt(n)) div=n;
        while(n%div==0){
            cout<<div<<" ";
            n/=div;
        }
        div++;
    }

    return 0;
}