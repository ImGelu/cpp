#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n*2; i>=1; --i)
        if(i%2==1) cout<<i<<" ";

    return 0;
}
