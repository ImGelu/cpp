//https://www.youtube.com/watch?v=biUQ9cpHsKE
#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("numere18.in");
ofstream cout("numere18.out");

int main(){

    int c;
    long long n, m, poz, pt, ut, s;

    cin>>c;

    if(c==1){
        cin>>n;
        pt=n*(n-1)/2+1;
        ut=pt+n-1;
        s=(pt+ut)*n/2;
        cout<<s;
    }
    else if(c==2){
        cin>>m;
        n=(1+int(sqrt(8*m-7)))/2;
        pt=n*(n-1)/2+1;
        poz=m-pt+1;
        cout<<n<<" "<<poz;
    }

    return 0;
}