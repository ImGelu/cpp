#include <iostream>

using namespace std;

int perm(int &n){

    int m=1, aux=n;

    while(n>9){
        m=m*10;
        n/=10;
    }
    n=aux%m*10+n;
}

int main()
{
    int n;

    cin>>n;

    perm(n);

    cout<<n;

    return 0;
}
