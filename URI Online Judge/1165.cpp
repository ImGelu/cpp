#include <iostream>
using namespace std;

int main()
{
    int n,nr;

    cin>>n;
    for(int i=1; i<=n; i++){
    int k=0;
    cin>>nr;
    for(int d=1; d<=nr; d++)
    if(nr%d==0)
    k++;
    if(k==2)
        cout<<nr<<" eh primo\n";
    else
        cout<<nr<<" nao eh primo\n";
    }
    return 0;
}
