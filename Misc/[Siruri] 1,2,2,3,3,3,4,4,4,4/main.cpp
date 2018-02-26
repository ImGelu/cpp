#include <iostream>

///sirul: 1,2,2,3,3,3,4,4,4,4,5,5,5,5,...
///sa se calculeze valoarea elementului de ordin k

using namespace std;

int main()
{
    int n=0, k;
    cin>>k;

    while((n*(n+1))/2<k) ++n;

    cout<<n;

    return 0;
}
