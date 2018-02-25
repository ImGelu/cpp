#include <iostream>
#include <math.h>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

bool aproapePrim(int n){
    for(int j=2; j<sqrt(n); j++)
        if(n%j==0 && prim(j) && prim(n/j)) return true;

    return false;
}


int main(){

    int n, x, k=0, max=-1;

    cin>>n;

    cin>>x;
    max=x;

    for(int i=1; i<n; i++){
        cin>>x;
        if(aproapePrim(x)){
        if(x>max){
            max=x;
            k=0;
        }
        if(x==max) k++;
        }
    }

    cout<<max<<" "<<k;

    return 0;
}