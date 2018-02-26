#include <fstream>

using namespace std;

int A, B;

int gcd(int a, int b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{

    ifstream cin("cmmdc.in");
    ofstream cout("cmmdc.out");

    cin>>A>>B;
    cout<<gcd(A, B);

    return 0;
}