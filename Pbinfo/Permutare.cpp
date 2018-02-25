#include <iostream>

using namespace std;

int n, a[200005], s=0;

int main()
{

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        s+=a[i];
    }

    if(s==(n*(n+1))/2) cout<<"DA";
    else cout<<"NU";

    return 0;
}
