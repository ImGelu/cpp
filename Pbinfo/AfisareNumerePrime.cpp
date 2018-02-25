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

void afisare(int a, int b){
    if(a>b) swap(a,b);
    for(int i=a; i<=b; i++)
        if(prim(i)) cout<<i<<" ";
}

int main()
{
    int a, b;

    cin>>a>>b;

    afisare(a, b);

    return 0;
}
