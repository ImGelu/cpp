#include <iostream>

using namespace std;

void prefix(int n, int k, int &x){
    int p=1;
    for(int i=1; i<=k; i++) p*=10;
    while(n/p) n/=10;
    x=n;
}

int main()
{
    int n, k, x;

    cin>>n>>k;

    prefix(n, k, x);

    cout<<x;

    return 0;
}
