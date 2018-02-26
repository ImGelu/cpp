#include <iostream>
using namespace std;

int main()
{
    int n,nr;

    cin>>n;
    for(int i=1; i<=n; i++){
    int s_div=0;
    cin>>nr;
    for(int d=1; d<=nr/2; d++)
    if(nr%d==0)
    s_div=s_div+d;
    if(s_div==nr)
        cout<<nr<<" eh perfeito\n";
    else
        cout<<nr<<" nao eh perfeito\n";
    }
    return 0;
}
