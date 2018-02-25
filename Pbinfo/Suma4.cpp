#include <iostream>

using namespace std;

int main()
{
    int n, s=0;
    cin>>n;

    s=((n/10)*3)%10;

    for(int i=1; i<=n%10; i++)
        s+=i*i*i*i;

    cout<<s%10;
    return 0;
}
