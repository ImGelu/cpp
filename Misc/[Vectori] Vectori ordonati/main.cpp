#include <iostream>

using namespace std;

int main()
{
    bool ordonat=true;
    int a[100], n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
        if(a[i]>a[i+1]){ordonat=false; break;}

        if(ordonat==false) cout<<"neordonat";
        else cout<<"ordonat";
    return 0;
}
