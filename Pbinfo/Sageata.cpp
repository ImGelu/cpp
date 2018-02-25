#include <iostream>

using namespace std;

int main(){

    int n;

    cin>>n;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i-1; j++) cout<<" ";
            for(int z=1; z<=n; z++) cout<<"*";
    cout<<endl;
    }

    for(int i=n+1; i<=2*n; i++){
        for(int j=2*n-1; j>=i; j--) cout<<" ";
            for(int z=1; z<=n; z++) cout<<"*";
    cout<<endl;
    }



    return 0;
}