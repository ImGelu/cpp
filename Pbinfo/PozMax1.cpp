#include <iostream>

using namespace std;

int main(){

    int n, ii, jj, maxim;
    double x;

    cin>>n;

    cin>>x;

    maxim=x;
    ii=1;
    jj=1;

    for(int i=2; i<=n; i++){
        cin>>x;
        if(x>maxim){ maxim=x; ii=i; jj=i;}
        if(x==maxim){ jj=i; }
    }

    cout<<ii<<" "<<jj;


    return 0;
}