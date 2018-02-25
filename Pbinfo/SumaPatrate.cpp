#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;

    cin>>n;

    cout<<(unsigned long long)((n*(n+1)*((2*n)+1))/6)%10234573;

    return 0;
}
