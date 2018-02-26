#include <iostream>
using namespace std;

unsigned long long petala(const unsigned long long &n)
{
    if(n==1) return 1;
    if(n%2==1) return 2 * petala((n - 1) / 2) + 1;
    return 2 * petala(n / 2) - 1;
}
int main()
{
    unsigned long long n;
    cin >> n;
    cout << petala(n) << '\n';
    return 0;
}
