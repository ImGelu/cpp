#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin>>n>>m;

    if(n%10==m/10 || m%10==n/10 || n/10==m/10 || n%10==m%10) cout<<"da";
    else cout<<"nu";

    return 0;
}