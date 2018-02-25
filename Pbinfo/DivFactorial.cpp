#include <iostream>

using namespace std;

unsigned long long factorial(int n){
    unsigned long long p=1;
    for(int i=1; i<=n; i++)
        p*=i;

    return p;
}

int main()
{
    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(factorial(n)%x==0) cout<<x<<" ";
    }

    return 0;
}