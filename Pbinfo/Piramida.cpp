#include <iostream>

using namespace std;

int main()
{
    int n, k=1;
    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++){
        cout<<j<<" ";
        if(j==i) cout<<"\n";
    }
    return 0;
}
