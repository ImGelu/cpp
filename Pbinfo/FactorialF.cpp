#include <iostream>

using namespace std;

int fact(int n){
    int p=1;
    for(int i=1; i<=n; i++)
        p*=i;
    return p;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
