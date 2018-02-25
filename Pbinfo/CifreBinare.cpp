#include <iostream>

using namespace std;

int baza(int n, int b, int &z){
    int nb=0, p=1;

    while(n){
        if(n%b==0) z++;
        nb+=p*(n%b);
        p*=10;
        n=n/b;
    }
    return nb;
}

int main()
{
    int a, b, z1=0, z2=0;

    cin>>a>>b;

    baza(a,2,z1);
    baza(b,2,z2);

    if(z1<=z2) cout<<a;
    else cout<<b;
    return 0;
}