#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;

    if(a<=15) cout<<a*a;
    else if(a>=16 && a<=30) cout<<(a%10)+(a/10);
    else cout<<(a%10)*(a/10);
    return 0;
}
