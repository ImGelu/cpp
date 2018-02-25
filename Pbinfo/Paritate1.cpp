#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, v[1000], imp=0, par=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        if(v[i]%2==0) par++;
        else imp++;
    }
    cout<<abs(par-imp);
    return 0;
}
