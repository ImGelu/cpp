#include <iostream>

using namespace std;

int main()
{
    int n, x, c;
    long long s=0;

    cin>>n;

    for(int i=1; i<=n; ++i){
        cin>>x;
        while(x){
            c=x%10;
            s=s+c*c*c;
            x/=10;
        }
    }

    cout<<s;

    return 0;
}