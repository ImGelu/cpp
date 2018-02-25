#include <iostream>

using namespace std;

int main()
{
    int a, b, c, cnt=0;

    cin>>a>>b>>c;
    if(a==b && b==c) cnt++;
    if(a!=b) cnt++;
    if(a!=c) cnt++;
    if(b!=c) cnt++;
    cout<<cnt;

    return 0;
}