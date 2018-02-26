#include <iostream>

using namespace std;

int main(){

    int n, x, prec=0, maxim;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        prec=x;
        if(x>prec) maxim=x;
    }
        cout<<maxim;
    return 0;
}
