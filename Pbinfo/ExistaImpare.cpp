#include <iostream>

using namespace std;

int main()
{
    int n, a[100], exista=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]%2==1) exista=1;
    }
    if(exista==1) cout<<"DA";
    else cout<<"NU";
    return 0;
}
