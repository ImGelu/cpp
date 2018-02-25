#include <iostream>

using namespace std;

int main()
{
    int n;
    char c[100];
    cin>>n>>c;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++){
        cout<<c;
        if(j==i) cout<<"\n";
    }
    return 0;
}
