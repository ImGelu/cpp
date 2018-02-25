#include <iostream>

using namespace std;

int main()
{
    int n, k, sol=1;

    cin>>n>>k;

    for(int i=1; i<=k; i++)
        sol*=n;

    cout<<sol;

    return 0;
}
