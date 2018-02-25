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

void sub(int n, int &a, int &b){
    int k=0;
    a=-1, b=-1;

    while(k!=2 && n){
        n--;
        if(prim(n)){
            k++;
            if(a==-1) a=n;
            else b=n;
        }
    }
}

int main()
{
    int n, a, b;

    cin>>n;

    sub(n, a, b);

    cout<<a<<" "<<b;
    return 0;
}
