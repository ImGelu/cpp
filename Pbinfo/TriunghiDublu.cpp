#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout<<"*";
            cout<<endl;
    }
    for(int i=1; i<=2*n; i++){
        for(int z=2*n; z>=i; z--){
            if(z>n) cout<<" ";
            else cout<<"*";
    }
    if(i<n)cout<<endl;
    }
    return 0;
}
