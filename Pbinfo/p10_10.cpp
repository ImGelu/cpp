#include <iostream>

using namespace std;

int main(){

    int n, k, cnt=0;

    cin>>n>>k;
    
    while(n>9){
        cnt++;
        n/=10;
    }

    cout<<1;
    for(int i=1; i<=k; i++)
        for(int j=1; j<=cnt; j++)
            cout<<0;


    return 0;
}