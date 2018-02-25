#include <iostream>

using namespace std;

int main()
{
    int n, k=n;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<=n*2; j++){
            if(i==n && j<n) cout<<"* ";
            else if((j==n-i || j==n+i-2) && j!=n*2-2) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
