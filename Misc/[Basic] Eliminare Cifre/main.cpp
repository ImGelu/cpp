#include <iostream>

using namespace std;

int main()
{
    int n, p=10, m=1, rez;

    cin>>n;

    while(n%m!=n){
        rez=(n/p)*m+n%m;
        cout<<rez<<" ";
        p*=10;
        m*=10;
    }

    return 0;
}
