#include <iostream>

using namespace std;

int main(){

    int n, c, p=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        p*=i;
        while(p%10==0) p/=10;
        c=p%10;
        p=p%10;
    }

    cout<<c;

    return 0;
}