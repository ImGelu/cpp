#include <fstream>

using namespace std;

ifstream cin("platou4.in");
ofstream cout("platou4.out");

int main(){

    int pi=-1, pf, x, k=0;

    while(cin>>x){
        k++;
        if(pi==-1 && x%2==0) pi=k;
        else if(x%2==0) pf=k;
    }

    cout<<pf-pi+1;

    return 0;
}