#include <iostream>

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

    int n, x, s=0, k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        s=0;
        cin>>x;
        if(prim(x)){
            while(x){
                s+=x%10;
                x/=10;
            }
            if(prim(s)) k++;
        }
    }

    cout<<k;

    return 0;
}