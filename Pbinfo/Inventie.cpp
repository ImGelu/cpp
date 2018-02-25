#include <fstream>
#include <limits.h>

using namespace std;

ifstream cin("inventie.in");
ofstream cout("inventie.out");

int nrcif(int n){
    int k=0;
    while(n){
        k++;
        n/=10;
    }
    return k;
}

int mod(int n){ return n>0 ? n:-n; }

int main(){

    int n, a, b, nr=0, k=0, min=INT_MAX, max=INT_MIN;

    cin>>n;

    for(int i=1; i<=n; i++){
        nr=0;
        cin>>a>>b;
        nr=mod(a-b);
        for(int i=1; i<=nrcif(a+b); i++) nr*=10;
        nr+=a+b;
        if(nr%2==0) k++;
        else if(nr>max) max=nr;
        else if(nr<min) min=nr;

        cout<<nr<<"\n";
    }

    if(k==n) cout<<0;
    else if(k==n-1){
        if(min!=INT_MAX) cout<<min;
        if(max!=INT_MIN) cout<<max;
    }
    else cout<<min<<"\n"<<max;


    return 0;
}