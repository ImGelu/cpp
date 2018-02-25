#include <fstream>

using namespace std;

ifstream cin("platou1.in");
ofstream cout("platou1.out");

int main(){

    int x, k=0, kMax=-1, prev=-1, nr=9999999, nrMin=9999999;

    cin>>x;
    prev=x;

    while(cin>>x){
        if(x==prev){
            k++;
            if(k==kMax)
                if(prev<nrMin) nrMin=prev;

            if(k>kMax){
                kMax=k;
                nrMin=prev;
            }
        }
        else k=0;
        prev=x;
    }

    cout<<kMax+1<<" "<<nrMin;

    return 0;
}