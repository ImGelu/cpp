#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;

    cin>>n;

    cout<<(unsigned long long)n*(n-3)/2<<"\n"<<(unsigned long long)180*(n-2);
    return 0;
}
