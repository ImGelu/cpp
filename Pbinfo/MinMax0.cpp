#include <iostream>

using namespace std;

int main()
{
    int a[10001], n, maxim=-9999, minim=9999;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]>maxim) maxim=a[i];
        if(a[i]<minim) minim=a[i];
    }
    cout<<minim<<" "<<maxim;


    return 0;
}
