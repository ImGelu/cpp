#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=3*n; j++){
        if(j<=i || j>=3*n-i+1) cout<<"*";
        else cout<<" ";
        }
    cout<<endl;
    }

    for(int j=1; j<=n; j++){
        for(int i=1; i<=4*n; i++){
            if(i>n && i<=2*n) cout<<"*";
                else cout<<" ";
            }
        cout<<endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=3*n; j++){
        if(j<=i || j>=3*n-i+1) cout<<"*";
        else cout<<" ";
        }
    cout<<endl;
    }

    return 0;
}
