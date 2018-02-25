#include <iostream>

using namespace std;

int main()
{
    int a[201], n, mA=0, k=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        mA=mA+a[i];
    }

    mA=mA/n;

    for(int i=1; i<=n; i++)
        if(a[i]>mA) k++;

    cout<<k;


    return 0;
}
