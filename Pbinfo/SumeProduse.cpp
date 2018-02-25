#include <iostream>

using namespace std;

int main()
{
    unsigned long long n, s1=0, s2=0, x;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(i<=n/2) s1+=x;
        else s2+=x;

    }

    cout<<s1*s2;

    return 0;
}
