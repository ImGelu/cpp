#include <fstream>

using namespace std;

ifstream cin("platou2.in");
ofstream cout("platou2.out");

int main(){

    int n, x, prev=-1, kMax=-1,  k=0;

    cin>>n;

    cin>>x;

    for(int i=1; i<n; i++){
        prev=x;
        cin>>x;
        if(x>prev){
            k++;
            if(k>kMax) kMax=k;
        }
        else k=0;

    }

    cout<<kMax+1;

    return 0;
}