#include <iostream>

using namespace std;

unsigned long long fact(int n){
    unsigned long long p=1;
    for(int i=1; i<=n; i++)
        p*=i;

    return p;
}

int main()
{
    int n;
    unsigned long long rez;

    cin>>n;

    rez=fact(n/2);

    if(n%2==1) cout<<0;
    else cout<<(unsigned long long)rez*rez;

    return 0;
}