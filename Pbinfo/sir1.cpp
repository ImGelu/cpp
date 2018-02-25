#include <iostream>

using namespace std;
int main()
{
    unsigned long long int n,i=1, s=0;
    cin>>n;

    while(s+i<=n){
        s+=i;
        i++;
    }

    if(s==n) cout<<1;
    else cout<<i+1-n%s;
    return 0;
}
