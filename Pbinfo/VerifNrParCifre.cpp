#include <iostream>

using namespace std;

int nrcif(int n){
    int s=0;
    while(n){
        s++;
        n/=10;
    }
    return s;
}

int main()
{
    int n, x[100], ok=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x[i];
        if(i>1 && nrcif(x[i])%2!=nrcif(x[i-1])%2){ ok=0; break; }
    }

    if(ok==0) cout<<"NU";
    else cout<<"DA";
    return 0;
}
