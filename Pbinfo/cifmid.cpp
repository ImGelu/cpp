#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;

    cin>>n;

    a = n/100;
    b = (n/10)%10;
    c = n%10;

    int max1 = max(a,b);
    int max2 = max(b,c);
    int max3 = max(a,c);

    int min1 = min(max1, max2);
    int min2 = min(min1, max3);

    cout<<min2;

    return 0;
}
