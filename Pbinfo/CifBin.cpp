#include <iostream>

using namespace std;

int baza(int n, int b, int &z, int &u){
    int nb=0, p=1;

    while(n){
        if(n%b==0) z++;
        else u++;
        nb+=p*(n%b);
        p*=10;
        n=n/b;
    }
    return nb;
}

int main()
{
    int n, z=0, u=0;

    cin>>n;

    baza(n,2,z,u);

    cout<<z<<" "<<u;
    return 0;
}