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
    int k=0, mare=0, micc=0, aux=n, aux2=n;
    a=-1, b=-1;

    while(k!=2){
        aux++;
        aux2--;
        if(prim(aux) && mare==0){b=aux; mare=1; k++;}
        if(prim(aux2) && micc==0){a=aux2; micc=1; k++;}
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
