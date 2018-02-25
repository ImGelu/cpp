#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, x, k=1, gasit=0, par;
    cin>>n;
    while(k<=n){
        cin>>x;
        if(x%2==0 && gasit==0){ par=x; gasit=1;}
    k++;
    }
    if(gasit==0) cout<<"IMPOSIBIL";
    else cout<<par;
    return 0;
}
