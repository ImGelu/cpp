#include <iostream>

using namespace std;

int main()
{
    int a, b, s=0;

    cin>>a>>b;

    if(a>b) swap(a, b);

    if(a==b) cout<<0<<"\n";
    else{
    for(int i=a+1; i<b; i++)
        if(i%2!=0) s+=i;

    cout<<s<<"\n";
    }
    return 0;
}
