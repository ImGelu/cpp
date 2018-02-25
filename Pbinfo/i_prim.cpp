#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2)
        if(n%i==0) return false;
    return true;
}

int i_prim(int n){
    int aux=n;

    while(!prim(aux)) aux--;
    while(!prim(n)) n++;

    return n-aux;
}


int main()
{
    int n;

    cin>>n;

    cout<<i_prim(n);
    return 0;
}
