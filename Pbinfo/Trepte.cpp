#include <iostream>

using namespace std;

int main()
{
    int precedent=1, anteprecedent=1, fib, n;

    cin>>n;

    if(n==1) cout<<1;
    else{
        for(int i=2; i<=n; i++){
        fib = precedent+anteprecedent;
        anteprecedent = precedent;
        precedent = fib;
    }

    cout<<fib;
    }
    return 0;
}