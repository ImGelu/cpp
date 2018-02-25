#include <iostream>

using namespace std;

int main()
{
    int n, a[100], toate=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]%2==1) {toate=0; break;}
    }

    if(toate==1) cout<<"DA";
    else cout<<"NU";
    return 0;
}
