#include <iostream>

using namespace std;

int main()
{
    int n=1, k, rez;
    cin>>k;

    if(k%5==0){
        cout<<k/5<<"\nDA\n";
        k/=5;
    }
    else{
        cout<<k/5+1<<"\nNU\n";
        k=k/5+1;
    }

    while(k>n){
        k-=n;
        n++;
    }

    if(n%2==0) cout<<"panselute";
    else cout<<"micsunele";

    return 0;
}
