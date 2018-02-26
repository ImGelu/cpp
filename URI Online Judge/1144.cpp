#include <iostream>

using namespace std;

int main()
{
    int n, a=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
        a=i*i;
        cout<<a<<" ";
        a=i*i*i;
        cout<<a<<"\n";
        cout<<i<<" ";
        a=i*i+1;
        cout<<a<<" ";
        a=i*i*i+1;
        cout<<a<<"\n";
    }
    return 0;
}
