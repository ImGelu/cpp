#include <fstream>

using namespace std;

ifstream cin("nrdiv.in");
ofstream cout("nrdiv.out");

int main(){

    int n, div=2, nrdiv=0, p=1;

    cin>>n;

    while(n>1){
        nrdiv=0;
        while(n%div==0){
            n/=div;
            nrdiv++;
        }
        if(nrdiv) p=p*(nrdiv+1);
        div++;
        if(div*div>n) div=n;
    }

    cout<<p;

    return 0;
}