#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cin>>n;

    x=(n-3)/3;

    if(x+x+1+x+2==n) cout<<x<<" "<<x+1<<" "<<x+2;
    else cout<<"NU EXISTA";
    return 0;
}
