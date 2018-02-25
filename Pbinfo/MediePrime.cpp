#include <iostream>
#include <iomanip>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main(){

    int k=0, s=0, n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(prim(x)){
            k++;
            s+=x;
        }
    }

    cout<<fixed<<setprecision(2)<<(double)s/k;
    return 0;
}