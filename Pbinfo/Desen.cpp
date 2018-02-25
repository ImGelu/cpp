#include <iostream>

using namespace std;

int main()
{
    int c, n;

    cin>>c>>n;

    if(c==1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
            cout<<i;}
            cout<<endl;
        }
    }

    if(c==2){
    for(int i=1; i<=n; i++){
        for(int z=1; z<=n-i; z++) cout<<" ";
        for(int j=1; j<=2*i-1; j++){
        cout<<i;
        }
    cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int z=1; z<=n-i; z++) cout<<" ";
        for(int j=1; j<=2*i-1; j++){
        cout<<i;
        }
    cout<<endl;
    }
    }

    if(c==3){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=2*n; j++)
            cout<<i;
            cout<<endl;
        }
    }

    if(c==4){
        for(int i=1; i<=n; i++){
        for(int z=1; z<=n-i; z++) cout<<" ";
        for(int j=1; j<=2*i-1; j++){
        cout<<i;
        }
    cout<<endl;
    }
    }
    return 0;
}
